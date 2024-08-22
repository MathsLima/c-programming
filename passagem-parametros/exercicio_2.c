#include <stdio.h>

void calculaHMS(int totalSegundos, int *h, int *m, int *s);

int main()
{
    int totalSeg;
    int horas, minutos, segundos;
    printf("Digite o total em segundos: ");
    scanf("%d", &totalSeg);
    calculaHMS(totalSeg, &horas, &minutos, &segundos);
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
}

void calculaHMS(int totalSegundos, int *h, int *m, int *s)
{
    *h = totalSegundos / 3600;
    *m = totalSegundos % 3600 / 60;
    *s = totalSegundos % 3600 % 60;
}