// T2 Programação de Baixo Nível - Gaya Pizoli e Matheus Lima

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float peso;
} Pessoa;

Pessoa pessoas[100];
int qtd = 0;

void carregar_arquivo() {
    FILE *arquivo = fopen("pessoas.bin", "r");
    if (arquivo != NULL) {
        fread(&qtd, sizeof(int), 1, arquivo);
        fread(pessoas, sizeof(Pessoa), qtd, arquivo);
        fclose(arquivo);
    }
}

void salvar_arquivo() {
    FILE *arquivo = fopen("pessoas.bin", "w");
    fwrite(&qtd, sizeof(int), 1, arquivo);
    fwrite(pessoas, sizeof(Pessoa), qtd, arquivo);
    fclose(arquivo);
}

void cadastrar() {
    if (qtd < 100) {
        printf("Nome: ");
        scanf("%s", pessoas[qtd].nome);
        printf("Idade: ");
        scanf("%d", &pessoas[qtd].idade);
        printf("Peso: ");
        scanf("%f", &pessoas[qtd].peso);
        qtd++;
        salvar_arquivo();
    } else {
        printf("Limite atingido\n");
    }
}

void listar() {
    if (qtd == 0) {
        printf("Nenhuma pessoa cadastrada\n");
    } else
    for (int i = 0; i < qtd; i++) {
        printf("%d - %s, %d anos, %.1f kg\n", i, pessoas[i].nome, pessoas[i].idade, pessoas[i].peso);
    }
}

void atualizar() {
    int indice;
    printf("Indice: ");
    scanf("%d", &indice);
    if (indice >= 0 && indice < qtd) {
        printf("Novo nome: ");
        scanf("%s", pessoas[indice].nome);
        printf("Nova idade: ");
        scanf("%d", &pessoas[indice].idade);
        printf("Novo peso: ");
        scanf("%f", &pessoas[indice].peso);
        salvar_arquivo();
    } else {
        printf("Indice invalido\n");
    }
}

void excluir() {
    int indice;
    printf("Indice: ");
    scanf("%d", &indice);
    if (indice >= 0 && indice < qtd) {
        for (int i = indice; i < qtd - 1; i++) {
            pessoas[i] = pessoas[i + 1];
        }
        qtd--;
        salvar_arquivo();
    } else {
        printf("Indice invalido\n");
    }
}

int main() {
    carregar_arquivo();
    int opcao;
    do {
        printf("\n1-Cadastrar\n2-Listar\n3-Atualizar\n4-Excluir\n0-Sair\n");
        scanf("%d", &opcao);
        if (opcao == 1) cadastrar();
        else if (opcao == 2) listar();
        else if (opcao == 3) atualizar();
        else if (opcao == 4) excluir();
    } while (opcao != 0);
    return 0;
}
