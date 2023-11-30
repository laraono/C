// E2_21) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia um número e procure esse número no vetor. E apresente o índice de todas as ocorrências localizadas, caso contrário -1.

#include <stdio.h>

int main(void) {
    int num[10],n,i, found = 0;
    for(int i=0; i < 10; i++) {
        scanf("%d",&num[i]);
    }
     scanf("%d",&n);
    for(i=0; i < 10; i++) {
        if(n == num[i]){
            printf("%d\n",i);
            found = 1;
        }
    }
    if(!found) printf("-1");
     
}