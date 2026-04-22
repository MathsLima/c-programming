/*
Implemente a função:

void contaVogais(char texto[]);

A função deve contar quantas vogais (a, e, i, o, u) existem na string e imprimir o total.

Restrição:
NÃO use índice (texto[i])
Use apenas ponteiros
*/

#include <stdio.h>

int contaVogais(char *texto){
    int qtd = 0;

    while(*texto != '\0'){
        if (*texto == 'a' || *texto == 'e' ||
            *texto == 'i' || *texto == 'o' ||
            *texto == 'u'){
            qtd++;
        }

        texto++; // anda na string
    }

    return qtd;
}

int main(){
    char texto[] = "batata";

    int resultado = contaVogais(texto);
    printf("Vogais: %d\n", resultado);

    return 0;
}