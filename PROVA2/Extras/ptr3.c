/*
Faça um programa que leia a quantidade de elementos n e crie dinamicamente um
vetor de n elementos e passe esse vetor para uma função que irá ler os elementos
desse vetor. Depois, no programa principal, o vetor preenchido deve ser impresso.
*/

#include <stdio.h>
#include <stdlib.h>
void leitura(int *x, int n){
    for(int i = 0; i < n; i++){
        printf("%d elemento:",i+1);
        scanf("%d",&x[i]);
    }
}

int main() {
    int n, i=0;
    int *x;
    printf("Quantidade de elementos:\n");
    scanf("%d",&n);
    x = (int *)malloc(sizeof(int)*n);
  if(!x){
    return -1;
  }
    leitura(x,n);
    for(int i=0; i<n; i++){
        printf("%d\n",x[i]);
    }
}