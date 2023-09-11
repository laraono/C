/* 
E31) Faça um programa que leia uma frase e apresente o número de palavras lidas. Considere todo símbolo não alfabético ou não numérico como delimitador.
 */
#include<stdio.h>
#include<string.h>

int main() {
    char str1[100];
    int count = 0;
    gets(str1);
    for(int i = 0; str1[i]; i++){
        if(((str1[i] >= 'A' && str1[i] <= 'z') || (str1[i] <= '9' && str1[i] >= '0')) && ((str1[i+1] < 'a' && str1[i+1] > '9')||str1[i+1] < '0')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}