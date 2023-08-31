// Faça um programa que leia 10 números, armazene-os em um vetor e apresente os 5 (cinco) números que estão nas posições ímpares.
#include<stdio.h>

int main() {
    int num;
    int vec[10];
    for (int i=0; i<10;i++){
        scanf("%d",&num);
        vec[i]=num;
    }
     for (int i=0; i<10;i++){
        if(i%2!=0){
            printf("%d\n",vec[i]);
        }
    }
    return 0;
}