// E2_14) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente a soma de cada coluna. A saída deverá ter um número por linha.

#include <stdio.h>

int main(void) {
    int vet[3][4];

    for(int i=0; i < 3; i++) {
         for(int j=0; j < 4; j++) {
            scanf("%d",&vet[i][j]);
         }

    }
    for(int i=0; i < 4; i++) {
        int sum = 0;
         for(int j=0; j < 3; j++) {
           sum += vet[j][i];
         }
        printf("%d\n",sum);
    }

}