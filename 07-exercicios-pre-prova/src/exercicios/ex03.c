/*
Maior valor em vetor (com ponteiro)
Crie uma função que:
recebe a struct por referência
retorna o maior valor
*/
#include <stdio.h>

typedef struct {
    int valores[5];
} Vetor;

int maiorValor(Vetor *v){
    int maior = v->valores[0];

    for(int i = 1; i < 5; i++){
        if(v->valores[i] > maior){
            maior = v->valores[i];
        }
    }

    return maior;
}

int main(){
    Vetor v = { {10, 25, 3, 40, 7} };
    int maior = maiorValor(&v);
    printf("Maior valor do vetor é: %d\n", maior);
}
