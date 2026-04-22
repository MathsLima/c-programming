#include <stdio.h>

void elimina(int *v, int posicao, int *qtd){
    int* p = v + posicao;

    while(p < v + (*qtd - 1)){
        *p = *(p + 1);
        p++;
    }

    (*qtd)--;
}

int main(){
    int vetor[50] = {1,2,3,4,5,6,7};
    int qtdElementos = 7;
    elimina(&vetor[1], 3, &qtdElementos);
    elimina(&vetor[5], 0, &qtdElementos);

    for(int i = 0; i < qtdElementos; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}