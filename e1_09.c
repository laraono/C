// Faça um programa que leia um número N e apresente todos os divisores de N (do menor para o maior, de 1 a N).

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i=1; i<=N-1; i++){
        if(N % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
