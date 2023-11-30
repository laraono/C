// E26) Faça um programa que leia uma String e apresente todos os sufixos da string.
#include <stdio.h>
#include <string.h>

int main(void) {
    char vet[60] = {};
    scanf("%s",vet);
    for(int i=0; vet[i]; i++) {
           for(int j=i; j < strlen(vet); j++) {
                printf("%c",vet[j]);
           }
        printf("\n");
    }
}