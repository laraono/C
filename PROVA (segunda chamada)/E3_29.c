// E29) Faça um programa que leia duas Strings, verifique se elas formam anagramas, ignorando variação de caixa e espaços em brancos e apresente: “Formam anagramas” ou “Nao formam anagramas”

#include <stdio.h>
#include <string.h>
int main(void) {
   char texto[50]={};
   char texto2[50]={};
   int count[26]={},count2[26]={}, anag=1; 
    gets(texto);
    gets(texto2);
    for(int i=0; texto[i]; i++){
       count[tolower(texto[i])-'a']++;
    }
    for(int i=0; texto2[i]; i++){
       count2[tolower(texto2[i])-'a']++;
    }
    for(int i=0; i<26; i++){
       if(count[i] != count2[i]){
           anag=0;
           break;
       }
    }
    if(anag) printf("anag");
    else printf("Não anag");

}