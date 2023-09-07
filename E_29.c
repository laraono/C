/* E29) Faça um programa que leia duas Strings, verifique se elas formam anagramas, ignorando variação de caixa e espaços em brancos e apresente: “Formam anagramas” ou “Nao formam anagramas” */
#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    int i=0;
    int j=0;
    int anag = 1;
    gets(str1);
    gets(str2);

        while(str1[i]){
            while(str2[j]){
                if(tolower(str1[i]) == tolower(str2[j]) ){
                    break;
                }
                j++;
            }
            if(tolower(str1[i]) != tolower(str2[j]) && !isspace(str1[i])){
                    anag = 0;
                    break;
                }
            j=0;
            i++;
        }
    
    if(anag){
        printf("Formam anagramas");
    }
    else {
        printf("Nao formam anagramas");
    }
}