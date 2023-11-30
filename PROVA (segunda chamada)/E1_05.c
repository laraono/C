// E1_05) Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).

#include <stdio.h>

int main(void) {
    int num, maior;
    scanf("%d",&num);
    maior = num;
    for(int i=1; i < 10; i++) {
        scanf("%d",&num);
        if(num > maior) {
            maior = num;
        }
    }
    printf("%d",maior);
}