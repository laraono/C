/*
menores - esq
maiores - dir
*/
#include <stdlib.h>
#include <stdio.h>

typedef struct _NO {
    int valor;
    struct _NO *esq;
    struct _NO *dir;
} NO;

void insertNew(NO *raiz, NO *novo){
    if(novo->valor > raiz->valor){
        if(!raiz->dir) raiz->dir = novo;
        else insertNew(raiz->dir, novo);
    }
    else if(novo->valor <= raiz->valor){
        if(!raiz->esq) raiz->esq = novo;
        else insertNew(raiz->esq, novo);
    }
}

void emOrdem(NO *no) {
if( no == NULL) {
return;
}
if( no->esq != NULL ) {
emOrdem(no->esq);
}
printf("%d\n",no->valor);
if( no->dir != NULL ) {
emOrdem(no->dir);
}
}

int main() {
    int num;
    NO *novo=NULL, *raiz=NULL;
    do {
    printf("Insira valores inteiros diferentes de zero e zero para encerrar: ");
    scanf("%d",&num);
        if(num){
           novo = malloc(sizeof(NO));
           if(!novo) {
            printf("Erro");
            exit(-1);
           }
           novo->valor = num;
           novo->dir = NULL;
           novo->esq = NULL;
           if(!raiz){
            raiz = novo;
           }else {
            insertNew(raiz, novo);
           }
            novo = NULL;
        }
    } while(num);
    emOrdem(raiz);
    free(novo);
    return 0;
}