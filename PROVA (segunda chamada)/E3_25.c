// E25) Faça um programa que leia uma String e apresente todos os prefixos da string.

#include <stdio.h>

int main(void) {
    char vet[60] = {};
    scanf("%s",vet);
    for(int i=0; vet[i]; i++) {
           for(int j=0; j <= i; j++) {
                printf("%c",vet[j]);
           }
        printf("\n");
    }
}