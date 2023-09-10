//  E2_17) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores do maior para o menor.

#include <stdio.h>

int main(void){
    int n[10]={0};
    int aux;
    
    for(int i=0; i < 10; i++) {
        scanf("%d",&n[i]);
    }
   
     for(int i=0; i < 9; i++) {
          for(int j=0; j < 9-i; j++){
              if(n[j]>n[j+1]){
                  aux = n[j];
                  n[j] = n[j+1];
                  n[j+1] = aux;
              }
          }
     }
     for(int i=9; i >= 0 ; i--) {
        printf("%d\n",n[i]);
    }
    return 0;
}
