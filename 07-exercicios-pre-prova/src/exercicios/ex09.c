/*
conta qtd de pares
*/

#include <stdio.h>

int contaPares(int *v, int n) {
    int cont = 0;

    for (int *p = v; p < v + n; p++) {
        if (*p % 2 == 0) {
            cont++;
        }
    }

    return cont;
}

int main() {
    int v[] = {1, 2, 3, 4, 6, 7};

    int n = sizeof(v) / sizeof(v[0]);

    int resultado = contaPares(v, n);

    printf("%d\n", resultado);

    return 0;
}