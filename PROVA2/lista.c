
#include <stdio.h>
#include <stdlib.h>

typedef struct _CEL
{
    int valor;
    struct _CEL *proximo;
} CEL;

int main(void) {
    CEL *first=NULL, *aux, *novo;
    int numero;
    do {
        printf("Informe um numero ou ZERO para encerrar: ");
        scanf("%d",&numero);
        if( numero ) {
            novo = (CEL *)malloc( sizeof(CEL) );
            novo->valor = numero;
            novo->proximo = NULL;
            if( first == NULL ) {
                first = novo;
            } else {
                aux = first;
                while( aux->proximo != NULL )
                aux = aux->proximo;
                // nesse ponto, o novo elemento é
                // adicionado ao final da lista
                aux->proximo = novo; 
                }
        }
    } while( numero );
    while( first ) {
        printf("%d\n",first->valor);
        aux = first;
        first = first->proximo;
        free(aux);
    }
}