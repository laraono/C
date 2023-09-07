// Faça um programa que leia uma frase e apresente o número de palavras lidas. Considere todo símbolo não alfabético ou não numérico como delimitador.
#include<stdio.h>

int main() {
    char str[100];
    int i=0;
    int count=0;
    gets(str);
    
    while(str[i]){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')){
            if(!((str[i+1] >= 'A' && str[i+1] <= 'Z') || (str[i+1] >= 'a' && str[i+1] <= 'z') || (str[i+1] >= '0' && str[i+1] <= '9'))){
            count++;}
        }
        i++;
    }
    printf("%d",count);
}