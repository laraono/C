// E1_06) Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.

#include <stdio.h>

int main(void){
    int n;
    
    do{
        scanf("%d",&n);
        if((n&1) == 1) printf("%d impar\n",n);
        else if(n) printf("%d par\n",n);
    }while(n);

    return 0;
}