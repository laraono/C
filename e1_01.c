//  Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária.
#include <stdio.h>

int main() {
    float num;
    int numint;
    float resto;
    // Write C code here
    scanf("%f\n",&num);

    numint = (int) num;
    resto = num - numint;
    
    printf("%d\n",numint);
    printf("%f\n",resto);
    return 0;
}