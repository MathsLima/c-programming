#include <stdio.h>

int main(){
  int vetor[] = {1,2,3,4,5};
  int tam = sizeof(vetor)/sizeof(int);
  int num = 3;
  int *numProcurado = &num;

  int resultado = buscaNumero(vetor, tam, num);

  if(resultado != 1){
    printf("Valor %d encontrado na posição %d", *numProcurado ,resultado);
  }else{
    printf("Valor não encontrado");
  }
}

int buscaNumero(int *vetor, int tam, int valor){
  for(int i=0; i<tam; i++){
    if(vetor[i] == valor){
      return i;
    }
  }
  return -1;
}