/*
Escreva uma função para um caixa de banco, que recebe um valor inteiro R e determina o 
número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia R. Faça de
forma que o número de notas usado seja o menor possível, retornando as quantidades de 
notas por referência.
*/
#include <stdio.h>

void pagamento(int v, int *n100, int*n50, int*n10, int*n5, int*n1);

int main(){

    int valor;
    printf("informe o valor a ser usado: ");
    scanf("%d", &valor);
    printf("O valor informado foi R$ %d\n", valor );
    
    int notas100, notas50, notas10, notas5, notas1;
    pagamento (valor, &notas100,  &notas50, &notas10, &notas5, &notas1);

    printf("O valor da separação de céulas é:");
    printf(" -> %d cédulas de 100\n", notas100);
    printf(" -> %d cédulas de 50\n", notas50);
    printf(" -> %d cédulas de 10\n", notas10);
    printf(" -> %d cédulas de 5\n", notas5);
    printf(" -> %d cédulas de 1\n", notas1);
}

void pagamento(int v, int *n100, int*n50, int*n10, int*n5, int*n1){
    int valorLocal = v;
    int localN100, localN50, localN10, localN5, localN1;

    localN100 = valorLocal / 100;
    valorLocal %= 100;

    localN50 = valorLocal / 50;
    valorLocal %= 50;

    localN10 = valorLocal / 10;
    valorLocal %= 10;

    localN5 = valorLocal / 5;
    valorLocal %= 5;

    localN1 = valorLocal;

    *n100 = localN100;
    *n50 = localN50;
    *n10 = localN10;
    *n5 = localN5;
    *n1 = localN1;

}