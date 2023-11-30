#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
} Pessoa;

int main() {
    Pessoa pessoas[5];
    int i, j, ind[5], maior;

    // Entrada de dados
    for(i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(pessoas[i].nome, 50, stdin);
        ind[i] = i;
    }

    // Ordenação dos índices
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(strcmp(pessoas[ind[j]].nome, pessoas[ind[j+1]].nome) > 0) {
                maior = ind[j];
                ind[j] = ind[j+1];
                ind[j+1] = maior;
            }
        }
    }

    // Impressão dos dados ordenados
    for(i = 0; i < 5; i++) {
        printf("\nNome: %s", pessoas[ind[i]].nome);
    }

    return 0;
}
