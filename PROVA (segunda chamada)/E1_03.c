// E1_03) Faça um programa que apresente os números de pares de 0 a 20, cada número em uma linha.

#include <stdio.h>

int main(void) {
    for(int i=0; i <= 20; i++) if((i&0x01) == 0) {
        printf("%d\n",i);
    }

}