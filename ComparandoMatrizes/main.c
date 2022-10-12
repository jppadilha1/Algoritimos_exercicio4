#include <stdio.h>

int main(){
    int A[3][3],B[3][3],i,j;
    A[0][0] = 10;
    A[0][1] = 1;
    A[0][2] = 9;
    A[1][0] = 12;
    A[1][1] = 5;
    A[1][2] = 7;
    A[2][0] = 4;
    A[2][1] = 8;
    A[2][2] = 6;
    
    B[0][0] = -10;
    B[0][1] = -1;
    B[0][2] = -9;
    B[1][0] = -12;
    B[1][1] = -5;
    B[1][2] = -7;
    B[2][0] = -4;
    B[2][1] = -8;
    B[2][2] = -6;

    printf("\n-----------------------------");
    for (int i = 0; i < 3;i++){
        putchar('\n');
        for (int j = 0; j < 3;j++){
            printf("%d ",A[i][j]);
        }
    }
    printf("\n-----------------------------");
    for (int i = 0; i < 3;i++){
        putchar('\n');
        for (int j = 0; j < 3;j++){
            printf("%d ",B[i][j]);
        }
    }
    printf("\n-----------------------------");
    if(A[i][j] == (B[i][j] * -1)){
        printf("\nSÃO MATRIZES OPOSTAS!");
    }else{
        printf("\nNÃO SÃO MATRIZES OPOSTAS!");
    }


    return 0;
}