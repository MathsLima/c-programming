/*
Média de notas

Função deve:
receber por ponteiro
retornar a média
*/
#include <stdio.h>

typedef struct {
    float n1, n2, n3;
} Aluno;


float calculoMedia(Aluno *a){
    return (a->n1 + a->n2 + a->n3) / 3;
}

int main(){
    Aluno a;
    a.n1 = 7;
    a.n2 = 10;
    a.n3 = 5;

    float media = calculoMedia(&a);
    printf("Media de notas: %f\n", media);
}
