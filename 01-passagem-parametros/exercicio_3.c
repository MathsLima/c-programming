#include <stdio.h>

int contaRepetidos(int v[], int tam);

int main(){
    int vet[10] = {1, 2, 3, 4, 5, 3, 6, 7, 2, 8};
    int totalRepet = contaRepetidos(vet, 10);
    printf("Total de repetidos: %d\n")
}

int contaRepetidos(int v[], int tam){
    int total_ocorrencias = 0;
    int contador = 0;
    for(int i=0; i<tam; i++){
        for (int j=i+1; j<tam; j++){
            if(v[i] == v[j]){
               total_ocorrencias++;
            }
        }
    }
}