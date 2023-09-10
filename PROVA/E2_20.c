/* E2_20) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia um número e procure esse número no vetor. Se encontrar, apresente o índice da posição da primeira que ocorrência do número, caso contrário apresente o valor -1. */
#include<stdio.h>

int main() {
    int vec[10]={0};
    int n,i,found;
    for (int i=0; i<10;i++){
         scanf("%d",&vec[i]);
    }
    scanf("%d",&n);
     for (int i=0; i<10;i++){
         if (n == vec[i]) {
             printf("%d\n",i);
             found = 1;
             break;
         }
    }
    if(!found) printf("-1");
    return 0;
}