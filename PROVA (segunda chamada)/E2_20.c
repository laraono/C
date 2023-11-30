// E2_20) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia um número e procure esse número no vetor. Se encontrar, apresente o índice da posição da primeira que ocorrência do número, caso contrário apresente o valor -1.

#include <stdio.h>

int main(void) {
    int num[10],n, i;
    for(int i=0; i < 10; i++) {
        scanf("%d",&num[i]);
    }
     scanf("%d",&n);
    for(i=0; i < 10; i++) {
        if(n == num[i]){
            printf("%d",i);
            break;
        }
    }
    if(n != num[i]) printf("-1");
     
}