#include <stdio.h>

int main(){
    
    int diagonal1=0,diagonal2=0;
    int matriz[3][3];
    matriz[0][0] = 10;
    matriz[0][1] = 1;
    matriz[0][2] = 9;

    matriz[1][0] = 12;
    matriz[1][1] = 5;
    matriz[1][2] = 7;

    matriz[2][0] = 4;
    matriz[2][1] = 8;
    matriz[2][2] = 6;

    for (int i = 0; i < 3;i++){
        putchar('\n');
        for (int j = 0; j < 3;j++){
            printf("%d ",matriz[i][j]);
        }
    }
     for (int i = 0; i < 3; i++) {
        diagonal1 += matriz[i][i];
    }

    int j = 3 - 1;
    for (int i = 0; i < 3; i++) {
        diagonal2 += matriz[i][j];
        j--;
    }

    printf("\nDiagonal principal: %d\n", diagonal1);
    printf("Diagonal secundaria: %d\n", diagonal2);


    return 0;
}
