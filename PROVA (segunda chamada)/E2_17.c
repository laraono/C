// E2_17) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores do maior para o menor.
#include <stdio.h>

int main(void) {
    int num[10], maior;
    for(int i=0; i < 10; i++) {
        scanf("%d",&num[i]);
    }
     for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i; j++) {
            if (num[j] > num[j + 1]) {
                maior = num[j];
                num[j] = num[j + 1];
                num[j + 1] = maior;
            }
        }
    }
       for(int i=9; i >= 0; i--) {
            printf("%d\n",num[i]);
       }
}