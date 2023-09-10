// E1_06) Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. 
#include <stdio.h>

int main() {
    
    int num;
    
    scanf("%d", &num);
    while (num) {
        if(num % 2 == 0) {
            printf("%d par", num);
        }
        else {
            printf("%d impar", num);
        }
        scanf("%d", &num);
        printf("\n");
    }
}