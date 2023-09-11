/* 
E25) Faça um programa que leia uma String e apresente todos os prefixos da string.

 */
#include<stdio.h>
#include<string.h>

int main() {
    char str[33]={0};
    scanf("%s",str);
    for(int i = 0; i < strlen(str); i++){
        for(int j = 0; j <=i; j++) {
                printf("%c",str[j]);
        }
            printf("\n");
    }

    return 0;
}