#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[81];
    int idade;
} REG;

typedef struct _NO {
    REG valor;
    struct _NO* esq;
    struct _NO* dir;
} NO;

void insereNo(NO* raiz, NO* novo) {
    if (strcmp(novo->valor.nome, raiz->valor.nome) >= 0) {
        if (raiz->dir == NULL) {
            raiz->dir = novo;
        } else {
            insereNo(raiz->dir, novo);
        }
    } else {
        if (raiz->esq == NULL) {
            raiz->esq = novo;
        } else {
            insereNo(raiz->esq, novo);
        }
    }
}

void emOrdem(NO* no) {
    int i;
    if (no == NULL) {
        return;
    }
    if (no->esq != NULL) {
        emOrdem(no->esq);
    }
    printf("Nome: %s, Idade: %d", no->valor.nome, no->valor.idade);
    printf("\n");
    if (no->dir != NULL) {
        emOrdem(no->dir);
    }
}

int main(void) {
    REG tabela[10];
    NO* raiz = NULL;
    NO* novo;

    for (int i = 0; i < 10; i++) {
        printf("Nome: ");
        gets(tabela[i].nome);
        printf("Idade: ");
        scanf("%d", &tabela[i].idade);
        while (getchar() != '\n');  // Clear the input buffer
        novo = (NO*)malloc(sizeof(NO));
        novo->esq = NULL;
        novo->dir = NULL;
        novo->valor = tabela[i];
        if (!raiz) {
            raiz = novo;
        } else {
            insereNo(raiz, novo);
        }
    }

    // Percurso e apresentação
    printf("\n\n");
    emOrdem(raiz);
    return 0;
}
