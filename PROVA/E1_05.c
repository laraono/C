// E1_05) Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).

#include <stdio.h>

int main(void){
    int n, maior;
    scanf("%d",&n);
    maior = n;
    for(int i=0; i<9; i++){
        scanf("%d",&n);
        if(n > maior) maior = n;
    }
    printf("%d",maior);
    return 0;
}