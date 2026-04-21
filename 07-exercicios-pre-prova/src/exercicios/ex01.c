/*
recebe 4 numeros nteiros e mostra a soma desses numeros
*/

#include <stdio.h>

int main(){
    int n1, n2, n3, n4, soma;

    printf("Digite o numero 1: \n");
    scanf("%d", &n1);

    printf("Digite o numero 2: \n");
    scanf("%d", &n2);

    printf("Digite o numero 3: \n");
    scanf("%d", &n3);

    printf("Digite o numero 4: \n");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;
    printf("A soma é %d\n", soma);

    return 0;
}
