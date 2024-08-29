#include <stdio.h>

int main(){
  int vetor[] = {1,2,3,4,5};
  int tam = sizeof(vetor)/sizeof(int);

  printf("Vetor original: ");
  for (int i = 0; i < tam; i++) {
      printf("%d ", vetor[i]);
  }
  printf("\n");

  inverteVetor(vetor, 0, tam - 1);

  printf("Vetor invertido: ");
  for (int i = 0; i < tam; i++) {
      printf("%d ", vetor[i]);
  }

  return 0;
}

int inverteVetor(int *vetor, int inicio, int fim){
  if(inicio < fim){
    int aux = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = aux;

    inverteVetor(vetor, inicio+1, fim-1);
  }
  
}