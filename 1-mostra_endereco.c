#include <stdio.h>

int main()
{
    int b = 200;
    int c = 1580;
    printf("%p\n", &b);  //operador & retorna o endereço do seu operando
    printf("%p\n", &c);    //%p exibe o valor como um end. de memória em hexa
}