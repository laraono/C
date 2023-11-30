/*
) Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as
suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um
ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de
x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.
Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}.
Assinatura da função:
int* uniao(int *x1, int *x2, int n1, int n2, int* qtd);
*/
#include <stdio.h>
#include <stdlib.h>
int* uniao(int *x1, int *x2, int n1, int n2, int* qtd){
    int *x3 = NULL;
    int i;
    *qtd = n1 + n2;
    x3 = (int *)malloc(sizeof(int)*(*qtd));
    if(!x3){
        exit(-1);
    }
    for(i=0; i < n1; i++){
        x3[i] = x1[i];
    }
     for(int j=0; j < n2; j++){
       int found = 1;
        for(int k=0; k < n1; k++){
          if(x2[j] == x1[k]){
            found = 0;
            break;
          }
        }
       if(found){
         x3[i] = x2[j];
          i++;
         
       }
       else {
         (*qtd)--;
       }
    }
  x3 = (int *)realloc(x3,sizeof(int)*(*qtd));
    return x3;
}

int main(){
    int *x3;
    int x1[] = {1, 3, 5, 6, 7};
    int n1 = 5;
    int x2[] = {1, 3, 4, 6, 8};
    int n2 = 5;
    int qtd;
    x3 = uniao(x1, x2, n1, n2, &qtd);
  for(int i=0; i<qtd; i++){
    printf("%d ", x3[i]);
  }
  free(x3);
}