/*
(Análise de código – erro com ponteiro)
Qual o problema neste código?
Explique o erro e corrija.
*/

void altera(int* p){
    p = 10;
}

int main(){
    int x = 5;
    altera(&x);
    printf("%d", x);
}


//falta o ponteiro em p=10 na função altera