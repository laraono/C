// E30) Faça um programa que leia 10 nomes e apresente os índices do vetor de nomes lidos, de forma, que se forem utilizados na apresentação, os nomes estarão ordenados. Observe que o vetor de nomes não sofre alteração.
#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[10][50]={};
    int maior, ind[10]={};
    for(int i=0; i < 10; i++) {
       gets(nome[i]);
       ind[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10  - 1 - i; j++) {
            if (strcmp(nome[ind[j]],nome[ind[j + 1]])>0) {
                maior = ind[j];
                ind[j] = ind[j + 1];
                ind[j + 1] = maior;
            }
        }
    }
    for(int i=0; i < 10; i++) {
       printf("%d\n",ind[i]);
    }

}