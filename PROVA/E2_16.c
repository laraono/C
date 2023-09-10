// E2_16) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia dois valores inteiros que estejam entre 0 e 9 (índices a e b) e apresente os valores lidos (vetor) que estejam entre os índices a e b.

#include <stdio.h>

int main(void){
    int n[10]={0};
    int a, b;
    
    for(int i=0; i < 10; i++) {
        scanf("%d",&n[i]);
    }
         scanf("%d",&a);
         scanf("%d",&b);
         
     for(int i=a; i <= b; i++) {
        printf("%d\n",n[i]);
    }
    
    return 0;
}