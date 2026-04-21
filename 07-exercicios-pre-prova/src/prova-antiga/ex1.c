/*
implemente a função que recebe 2 strings e retorna o comprimento do 
maior segmento de s1 que contem apenas caracteres presentes em s2
*/

#include <stdio.h>


int strcpn(char s1[], char s2[]);

int strcpn(char s1[], char s2[]) {
    int i, j;
    int encontrou;

    for (i = 0; s1[i] != '\0'; i++) {
        encontrou = 0;

        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                encontrou = 1;
                break;
            }
        }

        if (!encontrou) return i;
    }

    return i;
}

int main(){
    char* str1 = "abcde321!!";
    char* str2 = "qwertyuiopasdfghjklzxcvbnm";
    int tam = strcpn(str1, str2);

    printf("Se tirarmos os caracteres de str2, sobra: %s\n", str1 + tam);
}