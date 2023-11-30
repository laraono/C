// E2_16) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia dois valores inteiros que estejam entre 0 e 9 (índices a e b) e apresente os valores lidos (vetor) que estejam entre os índices a e b.

#include <stdio.h>

int main(void) {
    int vet[10] = {}, n1 = 0, n2 = 0;
    for(int i=0; i < 10; i++) {
        scanf("%d",&vet[i]);
    }
     scanf("%d",&n1);
     scanf("%d",&n2);
     for(int i=n1; i <= n2; i++) {
        printf("%d\n",vet[i]);
    }
}