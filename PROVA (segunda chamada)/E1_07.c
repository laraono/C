// E1_07) Faça um programa que leia três números e os apresente em ordem crescente. Apresente um número por linha.

#include <stdio.h>

int main(void) {
    int num[3] = {0}, maior;
    for(int i=0; i < 3; i++) {
        scanf("%d",&num[i]);
    }

     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (num[j] > num[j + 1]) {
                maior = num[j];
                num[j] = num[j + 1];
                num[j + 1] = maior;
            }
        }
    }

     for(int i=0; i < 3; i++) {
    printf("%d\n",num[i]);
     }
}