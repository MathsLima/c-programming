/*
(Strings – contar palavras)
Implemente:
int contaPalavras(char texto[]);
*/

int contaPalavras(char texto[]);

int contaPalavras(char texto[]){
    int qtd = 0;
    char *p = texto;

    while(*p != '\0'){
        if(*p != ' '){
            qtd++;
        }
    }
    return qtd;
}



int main(){
    
}