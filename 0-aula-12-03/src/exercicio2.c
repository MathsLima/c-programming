/*
Escreva um programa que receba um tempo em total de segundos desde a meia-noite,
exibindo o tempo em horas, minutos e segundos correspondentes.
*/

#include <stdio.h>

int main(){
    int totalSegundos;
    int horas, minutos, segundos, resto;


    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    resto = totalSegundos % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}