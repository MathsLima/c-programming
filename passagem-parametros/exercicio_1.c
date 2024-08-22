#include <stdio.h>

void troco(int r, int *n100, int *n50, int *n10, int *n5, int *n1);

int main()
{
    int valor;
    int notas100, notas50, notas10, notas5, notas1;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    troco(valor, &notas100, &notas50, &notas10, &notas5, &notas1);
    printf("%d nota(s) de 100\n", notas100);
    printf("%d nota(s) de 50\n", notas50);
    printf("%d nota(s) de 10\n", notas10);
    printf("%d nota(s) de 5\n", notas5);
    printf("%d nota(s) de 1\n", notas1);
}

void troco(int r, int *n100, int *n50, int *n10, int *n5, int *n1)
{
    *n100 = r / 100;
    *n50 = r % 100 / 50;
    *n10 = r % 100 % 50 / 10;
    *n5 = r % 100 % 50 % 10 / 5;
    *n1 = r % 100 % 50 % 10 % 5;
}