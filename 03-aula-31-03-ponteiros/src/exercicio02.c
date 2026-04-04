/*
Escreva uma função que receba dois vetores de inteiros de mesmo tamanho,e o tamanho
de um deles. A função deverá copiar os elementos do primeiro vetor para o segundo.
*/
#include <stdio.h>

void copiar(int A[], int B[], int tamanho);

void copiar(int A[], int B[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        B[i] = A[i];
    }
}

int main(){
    int A[5] = {1,2,3,4,5};
    int B[5];
    
    copiar(A, B, 5);

    printf("Vetor B:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}