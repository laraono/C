// E1_01) Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária.

#include <stdio.h>

int main(void){
    float n, frac;
    int i,neg;
    scanf("%f",&n);
    if(n < 0){
        neg =-1;
    }
    else neg = 1;
    for(i=0; i < n*neg; i++);
    i--;
    frac = n*neg - i;
    printf("%d\n%f",i*neg,frac*neg);
}