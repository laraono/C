#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[25];
    int qte;
} Ingrediente;

typedef struct {
    char nome[25];
    int qteIng; 
    Ingrediente *ingredientes;
} Receita;

int main() {
    Receita receita[5];
    char input[25];
    int found = 0;

    for(int i = 0; i < 5; i++) {
        printf("Nome da receita: ");
        fgets(receita[i].nome, 25, stdin);
        printf("Numero de ingredientes: ");
        scanf("%d", &receita[i].qteIng);
        getchar();

        receita[i].ingredientes = (Ingrediente *)malloc(sizeof(Ingrediente) * receita[i].qteIng);
        for(int j = 0; j < receita[i].qteIng; j++) {
            printf("Nome do ingrediente: ");
            fgets(receita[i].ingredientes[j].nome, 25, stdin);
            printf("Quantidade: ");
            scanf("%d", &receita[i].ingredientes[j].qte);
            getchar();
        }
    }

    printf("Pesquisa: ");
    fgets(input, 25, stdin);
    input[strcspn(input, "\n")] = 0;  // Remove o '\n' do final

    for(int i = 0; i < 5; i++) {
        if(strcmp(receita[i].nome, input) == 0) {
            found = 1;
            printf("Ingredientes da receita %s:\n", receita[i].nome);
            for(int j = 0; j < receita[i].qteIng; j++) {
                printf("%s: %d\n", receita[i].ingredientes[j].nome, receita[i].ingredientes[j].qte);
            }
        }
    }

    if(!found) {
        printf("Receita nao encontrada.\n");
    }

    for(int i = 0; i < 5; i++) {
        free(receita[i].ingredientes);
    }

    return 0;
}
