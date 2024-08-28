#include <stdio.h>

#define M 5  // Número de linhas da matriz A e resultado
#define N 3  // Número de colunas da matriz A e número de linhas da matriz B
#define P 4  // Número de colunas da matriz B e resultado

// Função para multiplicar duas matrizes
void multiplicarMatrizes(int A[M][N], int B[N][P], int C[M][P]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;
        }
    }

    // multiplicação
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int matriz[M][P]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[5][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15}
    };

    int B[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int C[5][4];  // Matriz para armazenar o resultado

    // Chama a função para multiplicar matrizes
    multiplicarMatrizes(A, B, C);

    // Imprime a matriz resultado
    printf("Matriz resultado:\n");
    imprimirMatriz(C);

    return 0;
}