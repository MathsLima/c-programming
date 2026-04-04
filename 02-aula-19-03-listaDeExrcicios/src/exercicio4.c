/*
Escreva uma função que receba uma matriz A 5x3, uma matriz B 3x4, e retorne 
por referência uma matriz 5x4 correspondente à multiplicação das outras duas.
*/

void multiplica(int A[5][3], int B[3][4], int C[5][4]);

void multiplica(int A[5][3], int B[3][4], int C[5][4]) {

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {

            C[i][j] = 0;

            for(int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

#include <stdio.h>

void multiplica(int A[5][3], int B[3][4], int C[5][4]);

int main() {

    int A[5][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {1,1,1},
        {2,2,2}
    };

    int B[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int C[5][4];

    multiplica(A, B, C);

    printf("Matriz resultado:\n");

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}