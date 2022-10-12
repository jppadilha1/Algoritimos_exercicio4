#include <stdio.h>

int main(){

    int A[3][2];
    A[0][0] = 1;
    A[0][1] = 4;

    A[1][0] = 2;
    A[1][1] = 5;

    A[2][0] = 3;
    A[2][1] = 6;

    for (int i = 0; i < 3;i++){
        putchar('\n');
        for (int j = 0; j < 2;j++){
            printf("%d ",A[i][j]);
        }
    }
    printf("\n---------------------");
    for (int i = 0; i < 2;i++){
        putchar('\n');
        for (int j = 0; j < 3;j++){
            printf("%d ",A[j][i]);
        }
    }



    return 0;
}
