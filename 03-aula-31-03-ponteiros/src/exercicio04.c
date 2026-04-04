/*
Escreva uma função que receba um vetor de inteiros e o tamanho do vetor. 
A função deverá ordenar os elementos (implemente, por exemplo, bubble sort).
*/

#include <stdio.h>

void bubbleSort(int v[], int tamanho);

void bubbleSort(int v[], int tamanho) {
    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = 0; j < tamanho - 1 - i; j++) {
            if(v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main() {
    int v[5] = {5,3,2,4,1};

    bubbleSort(v, 5);

    printf("Vetor ordenado:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}