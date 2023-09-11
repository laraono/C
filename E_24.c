/*
E24) Faça um programa que leia um número, chame uma função que converterá o número para Strings, sem os dígitos não significativos a esquerda. 
No programa principal, apresente o vetor retornado usando o %s no printf.
*/
#include<stdio.h>

int main() {
    int i=0;
    int num;
    scanf("%d",&num);
    char str[33];
   sprintf(str,"%d\0",num);
   while(str[i]=='0'){
       i++;
   }
   while(str[i]){
       printf("%c",str[i]);
       i++;
   }
}