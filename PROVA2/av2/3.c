#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _CIDADE{
    char nome[51];
    char uf[3];
    struct _CIDADE *esq, *dir;
}CIDADE;

void insertNew(CIDADE *novo, CIDADE *raiz){
    if(strcmp(novo->nome,raiz->nome)<= 0){
        if(!raiz->esq) raiz->esq = novo;
        else insertNew(novo, raiz->esq);
    }
    else if(strcmp(novo->nome,raiz->nome)>0){
         if(!raiz->dir) raiz->dir = novo;
        else insertNew(novo, raiz->dir);
    }
}

void emOrdem(CIDADE *no) {
    if(no == NULL) {
        return;
    }
    if(no->esq != NULL) {
        emOrdem(no->esq);
    }
    printf("%s, %s\n", no->nome, no->uf);
    if(no->dir != NULL) {
        emOrdem(no->dir);
    }
}

void freeTree(CIDADE *raiz){
    if(raiz != NULL){
        freeTree(raiz->esq);
        freeTree(raiz->dir);
        free(raiz);
    }
}

int main(void){
    CIDADE *novo, *raiz = NULL;
    char nome[25], UF[3];
    do{
        printf("Insira um nome de cidade ou zero para encerrar");
       gets(nome);
        if(strcmp(nome,"0")!=0){
            novo = (CIDADE *)malloc(sizeof(CIDADE));
            if(!novo){
                printf("Erro");
                return -1;
            }
            strcpy(novo->nome,nome);
            printf("Insira o UF");
            gets(UF);
            strcpy(novo->uf,UF);
            novo->esq = NULL;
            novo->dir = NULL;
            if(!raiz){
                raiz = novo;
            }
            else{
                insertNew(novo,raiz);
            }
        }
    }while(strcmp(nome,"0")!=0);
    emOrdem(raiz);
  printf("\n");
    freeTree(raiz);
    return 0;
}
