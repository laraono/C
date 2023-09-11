/* 
E24) Faça um programa que leia um número, chame uma função que converterá o número para Strings, sem os dígitos não significativos a esquerda. No programa principal, apresente o vetor retornado usando o %s no printf.

 */
#include<stdio.h>

void toString(char vet[], int n){
    int i = 0;
    char aux[32] = {0};
    while(n != 0){
        aux[i]= (n - 10 *(n/10))+'0';
        n /= 10;
        i++;
    }
    while(!aux[i] && i >= 0) i--;
    for(int j = 0; j <= i; j++) {
        vet[j] = aux[i-j];
    }

    vet[i+1]='\0';
 }

int main() {
    char str[33]={0};
    int n;
    scanf("%d",&n);
    toString(str,n);
    printf("%s",str);
    return 0;
}