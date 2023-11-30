#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _mun{
    char nome[25];
    int area;
    int pop;
    struct _mun *dir;
    struct _mun *esq;
}mun;

void inserir(mun *municipio, mun *raiz){
    if(strcmp(municipio->nome,raiz->nome)<=0){
        if(raiz->esq){
            inserir(municipio,raiz->esq);
        }
        else {
            raiz->esq = municipio;
        }
    }
    else if(strcmp(municipio->nome,raiz->nome)>0){
        if(raiz->dir){
            inserir(municipio,raiz->dir);
        }
        else {
            raiz->dir = municipio;
        }
    }
} 

int main(){
    mun *novo, *raiz = NULL;
    while(1){
        novo = (mun *)malloc(sizeof(mun));
        printf("Nome:");
        fgets(novo->nome, 25, stdin);
        novo->nome[strcspn(novo->nome, "\n")] = 0;  // Remove o '\n' do final
        if(strcmp(novo->nome,"")==0) break;
        printf("Area:");
        scanf("%d",&(novo->area));
        printf("População:");
        scanf("%d",&(novo->pop));
        getchar();  // Limpa o buffer do teclado
        novo->dir = NULL;
        novo->esq = NULL;
        if(raiz == NULL){
            raiz = novo;
        }
        else {
            inserir(novo,raiz);
        }
    }
    return 0;
}
