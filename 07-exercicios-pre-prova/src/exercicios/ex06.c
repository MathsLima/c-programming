/*
(Strings – inverter texto)

Implemente: void inverte(char texto[]);

Deve inverter a string (ex: "casa" → "asac")

Restrição:
Use ponteiros
NÃO pode usar outro vetor auxiliar
*/
#include <stdio.h>

void inverte(char texto[]) {
    char *ptr1 = texto;
    char *ptr2 = texto;
    char temp;

    while (*ptr2 != '\0') {
        ptr2++;
    }

    ptr2--;

    while (ptr1 < ptr2) {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }
}

int main() {
    char texto[] = "casa";
    inverte(texto);
    printf("%s\n", texto);

    return 0;
}