#include <stdio.h>
typedef struct _NO{
int valor;
struct _NO *esq;
struct _NO *dir;
} NO;

void insereNo(NO *raiz,NO *novo) {
if( novo->valor >= raiz->valor ) {
if( raiz->dir == NULL ) {
raiz->dir = novo;
} else {
insereNo( raiz->dir, novo);
}
} else {
if( raiz->esq == NULL ) {
raiz->esq = novo;
} else {
insereNo( raiz->esq, novo);
}
}
}
void emOrdem(NO *no,int nivel) {
int i;
if( no == NULL) {
return;
}
if( no->esq != NULL ) {
emOrdem(no->esq,nivel+1);
}
if( nivel>0 ) {
for(i=0 ; i<nivel ; i++) {
printf(" ");
}
}
printf("%d\n",no->valor);
if( no->dir != NULL ) {
emOrdem(no->dir,nivel+1);
}
}


int main( void ) {
int num;
NO *raiz = NULL, *aux, *novo;
printf("Insira valores inteiros diferentes de zero e zero para encerrar: ");
do {
printf ("numero: ");
scanf ("%d", &num);
if( num ) {
novo = (NO *) malloc (sizeof (NO));
novo->esq = NULL;
novo->dir = NULL;
novo->valor = num;
if ( !raiz ) { // if( raiz == NULL )
raiz = novo;
} else {
insereNo(raiz,novo);
}
}
} while (num);
// percurso e apresentação
printf("\n\n");
emOrdem(raiz,0);
return 0;
}