/*
Faça um programa que leia três valores inteiros (a,b,c) e apresente o maior número lido.
*/
#include <stdio.h>

int main(void){
    int n[3];
    int maior;
    scanf("%d",&n[0]);
    scanf("%d",&n[1]);
    scanf("%d",&n[2]);
    maior = n[0];
    for(int i=0; i<3; i++){
        if(n[i] > maior){
            maior = n[i];
        }
    }
    
    printf("%d",maior);

    return 0;
}