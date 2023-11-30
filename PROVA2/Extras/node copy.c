#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node{
    char nome[20];
    struct _node *esq;
    struct _node *dir;
} node;

void insertNew(node *novo, node *raiz){
    if(strcmp(novo->nome,raiz->nome)<= 0){
        if(!raiz->esq) raiz->esq = novo;
        else insertNew(novo, raiz->esq);
    }
    else if(strcmp(novo->nome,raiz->nome)>0){
         if(!raiz->dir) raiz->dir = novo;
        else insertNew(novo, raiz->dir);
    }
}

void emOrdem(node *raiz){
    if(raiz != NULL){
        emOrdem(raiz->esq);
        printf("%s\n",raiz->nome);
        emOrdem(raiz->dir);
    }
}

void preOrdem(node *raiz){
    if(raiz != NULL){
         printf("%s\n",raiz->nome);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}
void posOrdem(node *raiz){
    if(raiz != NULL){
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
         printf("%s\n",raiz->nome);
    }
}
void espelhaOrdem(node *raiz){
    if(raiz != NULL){
        espelhaOrdem(raiz->dir);
        printf("%s\n",raiz->nome);
        espelhaOrdem(raiz->esq);
    }
}

void contaExterno(node *raiz, int * counter){
    if(raiz){
    if(!raiz->esq && !raiz->dir){
        (*counter)++;
    }
    else{
        contaExterno(raiz->esq, counter);
        contaExterno(raiz->dir, counter);
    }
    }
    else {
        return;
    }
}

void freeTree(node *raiz){
    if(raiz != NULL){
        freeTree(raiz->esq);
        freeTree(raiz->dir);
        free(raiz);
    }
}

int main(void){
    node *novo, *raiz = NULL;
    char nome[25];
    do{
        printf("Insira um nome ou zero para encerrar");
       gets(nome);
        if(strcmp(nome,"0")!=0){
            novo = (node *)malloc(sizeof(node));
            if(!novo){
                printf("Erro");
                return -1;
            }
            strcpy(novo->nome,nome);
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
  preOrdem(raiz);
  printf("\n");
  posOrdem(raiz);
    freeTree(raiz);
    return 0;
}
