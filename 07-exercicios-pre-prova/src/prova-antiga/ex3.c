/*
criar uma struct para representar um horario com 
horas minutos e segundos
*/

#include <stdio.h>

typedef struct {
    int hora;
    int minuto;
    int segundo;
} Horario;

void init(Horario *h, int hora, int minuto, int segundo){
    h -> hora = hora;
    h -> minuto = minuto;
    h -> segundo = segundo;
}

int totalSegs(Horario h){
    return h.hora * 3600 + h.minuto * 60 + h.segundo;
}

int timeDelta(Horario *h1, Horario *h2, Horario *h3){
    int seg1 = totalSegs(*h1);
    int seg2 = totalSegs(*h2);

    int delta = seg2 - seg1;

    h3->hora = delta / 3600;
    h3->minuto = (delta % 3600) / 60;
    h3->segundo = delta % 60;
}


int main() {
    Horario h1, h2, h3;

    init(&h1, 1, 10, 30);
    init(&h2, 2, 15, 40);

    timeDelta(&h1, &h2, &h3);

    printf("Diferenca: %02d:%02d:%02d\n", h3.hora, h3.minuto, h3.segundo);

    return 0;
}