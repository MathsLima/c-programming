/*
Escreva um programa que leia um vetor de inteiros, descubra e exiba um número inteiro 
correspondente à quantidade de valores que aparecem mais de uma vez. Exemplo: se o vetor 
for [1, 2, 3, 4, 5, 3, 6, 7, 2, 8], o retorno será 2 (2 números se repetem, 2 e 3).
*/

#include <stdio.h>

int main (){
    int vetor[10];
    int i, j, k;
    int contador = 0;
    int repetidoAntes;


    printf("Digite 10 numeros:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {

        repetidoAntes = 0;

        // verifica se já apareceu antes
        for(k = 0; k < i; k++) {
            if(vetor[i] == vetor[k]) {
                repetidoAntes = 1;
                break;
            }
        }

        if(repetidoAntes)
            continue;

        // procura repetição depois
        for(j = i + 1; j < 10; j++) {
            if(vetor[i] == vetor[j]) {
                contador++;
                break;
            }
        }
    }
    
    printf("Quantidade de numeros repetidos: %d\n", contador);

    return 0;
}