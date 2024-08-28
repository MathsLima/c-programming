#include <stdio.h>

//ponteiro e a variavel que armazena o endereço de memoria

int main(){
    int b = 200;
    int c = 500;
    int *a = &b;  //* declara que a é um ponteiro para um int
    int *d = &c;

    printf("Endereço de b: %p\n", &b);
    printf("Endereço de a: %p\n", &a);
    printf("Endereço de c: %p\n", &c);
    printf("Endereço de d: %p\n", &d);
    
    printf("Valor de b: %d\n", b);
    printf("Valor de a: %d\n", *a);
    printf("Valor de c: %d\n", c);
    printf("Valor de d: %d\n", *d);

    printf("Alterando o valor de *a para 100\n");
    *a = 100;
    printf("b: %d\n", b);
    printf("a %d\n", *a);

    //Ponteiros e vetores
    printf("\n");
    

    printf("Array de char");
    char vetc[10] = { 'a', 'b', 'c ', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    printf("vetc[0]: %c\n", vetc[0]);
    printf("*vetc: %p\n", *vetc);
    printf("*(vetc+1): %c\n", *(vetc + 1));
    printf("vetc: %p\n", vetc);
    printf("&vetc[0]: %p\n", &vetc[0]);
    printf("&vetc[1]: %p\n", &vetc[1]);

    printf("\n");
    printf("Array de int");
    int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printf("data[0]: %d\n", data[0]);
    printf("*data: %d\n", *data);
    printf("data: %p\n", data);
    printf("&data[0]: %p\n", &data[0]);
    printf("&data[1]: %p\n", &data[1]);
    printf("data+1: %p\n", data + 1);
    printf("data+1: %p\n", data + 2);
    printf("data+1: %p\n", data + 3);
    printf("*(data+1): %d\n", *(data + 1));
    printf("*(data+2): %d\n", *(data + 2));
    printf("*(data+3): %d\n", *(data + 3));
}