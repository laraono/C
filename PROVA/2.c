/*
Faça um programa que leia um número e apresente o número lido e a seguir se ele é "par" ou "impar" (sem acento).
*/
#include <stdio.h>

int main(void){
    int n = 0;
    scanf("%d",&n);
    if(n & 1 == 1){
        printf("%d impar",n);
    }
    else {
        printf("%d par",n);
    }

    return 0;
}