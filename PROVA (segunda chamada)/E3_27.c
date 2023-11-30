// E26) Faça um programa que leia uma String e apresente todos os sufixos da string.
#include <stdio.h>
#include <string.h>

int main(void) {
    char vet[60] = {};
    char suf[60][60];
    int ord[60] = {};
    int maior;
    scanf("%s",vet);
    for(int i=0; vet[i]; i++) {
           for(int j=i; j < strlen(vet); j++) {
               suf[i][j-i]= vet[j];
           }
           suf[i][strlen(vet) - i] = '\0';
           ord[i] = i;
    }
     for (int i = 0; i < strlen(vet) - 1; i++) {
        for (int j = 0; j < strlen(vet) - i -1; j++) {
            if (strcmp(suf[ord[j]], suf[ord[j+1]])>0) {
                maior = ord[j];
                ord[j] = ord[j + 1];
                ord[j + 1] = maior;
            }
        }
    }
    for(int i=0; i < strlen(vet); i++) printf("%s\n",suf[ord[i]]);
}