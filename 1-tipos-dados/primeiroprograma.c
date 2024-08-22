#include <stdio.h>

int main()
{
    int valor1, valor2;
    float teste;
    // Variávei não inicializadas podem ter LIXO
    // (Não há garantia que sejam 0)
    printf("Valores iniciais: %d e %d\n", valor1, valor2);
    printf("Valor inicial de teste: %f\n", teste);
    printf("Digite dois valores: ");
    // Não esquecer os & !
    scanf("%d %d", &valor1, &valor2);
    printf("Você digitou %d e %d\n", valor1, valor2);

    // Exemplo: declarando e utilizando uma matriz
    int mat[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = i * j;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}