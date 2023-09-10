// E2_11) Faça um programa que leia 10 números, armazene-os em um vetor e apresente os 5 (cinco) números que estão nas posições ímpares.

#include <stdio.h>

int main(void){
    int n[10];
    
    for(int i=0; i < 10; i++) scanf("%d",&n[i]);
     for(int i=0; i < 10; i++) if((i&1) == 1) printf("%d\n",n[i]);

    return 0;
}