/* 
E26) Faça um programa que leia uma String e apresente todos os sufixos da string.

 */
#include<stdio.h>
#include<string.h>

int main() {
    char str[33]={0};
    scanf("%s",str);
    for(int i = 0; i < strlen(str); i++){
        for(int j = 0; j+i < strlen(str); j++) {
                printf("%c",str[j+i]);
        }
            printf("\n");
    }

    return 0;
}