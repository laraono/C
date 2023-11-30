// E2_11) Faça um programa que leia 10 números, armazene-os em um vetor e apresente os 5 (cinco) números que estão nas posições ímpares.

#include <stdio.h>

int main(void) {
    int vet[10] = {};
    for(int i=0; i < 10; i++) {
        scanf("%d",&vet[i]);
    }
        for(int i=0; i < 10; i++) if((i&0x01)!=0) printf("%d\n",vet[i]);


}