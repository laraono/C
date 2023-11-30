// E1_01) Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária.

#include <stdio.h>

int main(void) {
    float numf, decf;
    int numint = 0;
    scanf("%f",&numf);
    numint = (int)numf;
    decf= numf-numint;

    printf("%d",numint);
    printf("%f",decf);

}