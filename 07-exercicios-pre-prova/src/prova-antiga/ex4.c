#include <stdio.h>
#include <string.h>

void contabilizaTamanhos(char texto[]){
    //3 palavras com tamanho 1 ("a", "a", "a")

    int tam[11] = {0};
    int contador =0;
    for(int i = 0; i < texto[i] != '\0'; i++){
        if(texto[i] != ' '){
            contador++;
        } else{
            tam[contador]++;
            contador = 0;
        }
    }
    tam[contador]++;

    for(int i = 1; i <= 10; i++){
        printf("Tam %d: %d\n", i, tam[i]);
    }

}

int main(){
    char s1[100];
    strcpy(s1, "Esta e uma frase de exemplo");
    contabilizaTamanhos(s1);
    return 0;
}