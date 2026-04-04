/*
Escreva uma função que receba um vetor de inteiros e o tamanho do vetor.
A função deverá inverter a ordem dos elementos do vetor.
Lógica: dividir o vetor no meio e para cada conjunto lateral inverter:
[1, 2, 3, 4, 5]
 ↑           ↑
 troca

[5, 2, 3, 4, 1]
    ↑     ↑
    troca

logo: posição oposta = tamanho - 1 - i
*/

#include <stdio.h>

void inverter(int v[], int tamanho);

void inverter(int v[], int tamanho) {
    for(int i = 0; i < tamanho / 2; i++) {

        int j = tamanho - 1 - i;

        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main() {
    int v[5] = {1,2,3,4,5};
    inverter(v, 5);
    printf("Vetor invertido:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}