// E2_15) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente os elementos em que a soma dos índices i e j sejam pares. Respeite a ordem de apresentação linha,coluna.

#include <stdio.h>

int main(void) {
    int vet[3][4];

    for(int i=0; i < 3; i++) {
         for(int j=0; j < 4; j++) {
            scanf("%d",&vet[i][j]);
         }

    }
    for(int i=0; i < 3; i++) {
         for(int j=0; j < 4; j++) {
           if(((i+j)&0x01)== 0) {
                    printf("%d\n",vet[i][j]);
           }
         }

    }

}