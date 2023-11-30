// E1_06) Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes. Mostre apenas "par" ou "impar" (sem acentos).

#include <stdio.h>

int main(void) {
   int num = 0;
   do{
    scanf("%d",&num);
    if(num != 0){
        if((num&0x01) == 0) printf("%d par\n",num);
        else  printf("%d impar\n",num);
    }
    } while (num);

}