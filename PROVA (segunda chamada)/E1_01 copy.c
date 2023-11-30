// E1_01) Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária.

#include <stdio.h>

int main(void) {
    float numf, decf,aux;
    int numint = 0;
    scanf("%f",&numf);
    aux = numf;
    while(aux > 0) {
        numint++;
        aux--;
    }
    
    numint--;
    decf = numf - numint;
 

    printf("%d\n",numint);
    printf("%f",decf);

}