#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int num;
    struct _node *esq;
    struct _node *dir;
} node;

void insertNew(node *novo, node *raiz){
    if(novo->num <= raiz->num){
        if(!raiz->esq) raiz->esq = novo;
        else insertNew(novo, raiz->esq);
    }
    else if(novo->num > raiz->num){
         if(!raiz->dir) raiz->dir = novo;
        else insertNew(novo, raiz->dir);
    }
}

void emOrdem(node *raiz){
    if(raiz != NULL){
        emOrdem(raiz->esq);
        printf("%d ",raiz->num);
        emOrdem(raiz->dir);
    }
}


void emOrdemLvL(node *raiz, int nivel){
    if(raiz != NULL){
        emOrdem(raiz->esq, nivel+1);
        printf("%d ",raiz->num);
        emOrdem(raiz->dir, nivel+1);
    }
}


void sumLvL(const int nivel, node *raiz, int lvlTemp, int* sum){
    if(raiz != NULL){
        if(lvlTemp == nivel){
            *sum += raiz->num;
        }
        else{
            sumLvL(nivel, raiz->esq, lvlTemp+1,sum);
            sumLvL(nivel, raiz->dir, lvlTemp+1,sum);
        }
    }
}


void preOrdem(node *raiz){
    if(raiz != NULL){
         printf("%d ",raiz->num);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}
void posOrdem(node *raiz){
    if(raiz != NULL){
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
         printf("%d ",raiz->num);
    }
}
void espelhaOrdem(node *raiz){
    if(raiz != NULL){
        espelhaOrdem(raiz->dir);
        printf("%d ",raiz->num);
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

void contaUmFilho(node *raiz, int * counter){
    if(raiz){
    if((!raiz->esq && raiz->dir)||(raiz->esq && !raiz->dir)){
        (*counter)++;
    }
    else{
        contaUmFilho(raiz->esq, counter);
         contaUmFilho(raiz->dir, counter);
    }
    }
    else {
        return;
    }
}

void contaNodes(node *raiz, int * counter){
    if(raiz){
        counter++;
        if(raiz->esq){
            contaNodes(raiz->esq,counter);
        }
        if(raiz->dir){
            contaNodes(raiz->dir,counter);
        }
    }
}

void contaPrimos(node *raiz, int * counter){
    if(raiz){
        int primo = 1;
        for(int i=2; i<(raiz->num)-1;i++){
            if(((raiz->num)%i)==0){
                primo = 0;
                break;
            }
        }
        if(primo) counter++;
        if(raiz->esq){
            contaPrimos(raiz->esq,counter);
        }
        if(raiz->dir){
            contaPrimos(raiz->dir,counter);
        }
    }
}

void menorValor(node *raiz, int *menor) {
    if (raiz != NULL) {
        if (raiz->num < *menor) *menor = raiz->num;
        menorValor(raiz->esq, menor);
        menorValor(raiz->dir, menor);
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
    int num;
    do{
        printf("Insira um valor ou zero para encerrar:");
        scanf("%d",&num);
        if(num){
            novo = (node *)malloc(sizeof(node));
            if(!novo){
                printf("Erro");
                return -1;
            }
            novo->num = num;
            novo->esq = NULL;
            novo->dir = NULL;
            if(!raiz){
                raiz = novo;
            }
            else{
                insertNew(novo,raiz);
            }
        }
    }while(num);
    emOrdem(raiz);
  printf("\n");
  preOrdem(raiz);
  printf("\n");
  posOrdem(raiz);
    freeTree(raiz);
    return 0;
}
