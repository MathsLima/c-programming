/*
Ecreva uma função que receba um vetor de inteiros, mais a quantidade de valores presentes nele, 
e retorne um número inteiro correspondente à quantidade de valores que aparecem mais de uma vez.
Exemplo: se o vetor for [1, 2, 3, 4, 5, 3, 6, 7, 2, 8], o retorno será 2 (2 números se repetem, 2 e 3).
*/

#include <stdio.h>

int contaRepetidos(int valor[], int tamanho);

int contarRepetidos(int vetor[], int tamanho) {
    int i, j, k;
    int contador = 0;
    int repetidoAntes;

    for(i = 0; i < tamanho; i++) {

        repetidoAntes = 0;

        // Verifica se já apareceu antes
        for(k = 0; k < i; k++) {
            if(vetor[i] == vetor[k]) {
                repetidoAntes = 1;
                break;
            }
        }

        if(repetidoAntes)
            continue;

        // Verifica se aparece depois
        for(j = i + 1; j < tamanho; j++) {
            if(vetor[i] == vetor[j]) {
                contador++;
                break;
            }
        }
    }

    return contador;
}

int main() {
    int v[10] = {1,2,3,4,5,3,6,7,2,8};
    int resultado = contarRepetidos(v, 10);
    
    printf("Quantidade de repetidos: %d\n", resultado);
    return 0;
}