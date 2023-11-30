// Faça um programa que leia um número N e apresente todos os divisores de N (do menor para o maior, de 1 a N-1).

#include <stdio.h>

int main(void) {
    int N = 0;
    scanf("%d",&N);

    for(int i=1; i <= N - 1; i++) {
        if(N % i == 0) printf("%d\n",i);
    }

}