// E1_02) Faça um programa que apresente os números de 1 a 20, cada número em uma linha.

#include <stdio.h>

int main(void){
    for(int i=1; i <= 20; i++) if(i&1 != 1) printf("%d\n",i);
    return 0;
}