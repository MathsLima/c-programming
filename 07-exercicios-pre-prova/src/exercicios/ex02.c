/*
receber um salario e o percentual de aumento, calcular e mostrar o 
valor do novo salario
*/

#include <stdio.h>

typedef struct{
    int salarioMensal;
    int percentualAumento;
} Salario;


int calculaPercentual(Salario *s){
    int salarioFinal = s->salarioMensal + (s->salarioMensal * s->percentualAumento) / 100;
    return salarioFinal;
}

int main(){
    Salario s;
    s.salarioMensal = 1000;
    s.percentualAumento = 10;

    int novoSalario = calculaPercentual(&s);

    printf("Novo salario: %d\n", novoSalario);
}
