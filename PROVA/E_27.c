/* 
E27) Faça um programa que leia uma String e apresente todos os sufixos da string em ordem léxica.
 */
#include<stdio.h>
#include<string.h>

int main() {
    char vet[33][33]={0};
    char str[33]={0};
    int ind[33]={0};
    int aux, len;
    
   scanf("%s",str);
    
    len = strlen(str);
    
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++) {
                vet[i][j] = str[i+j];
        }
        ind[i] = i;
    }
    
     for(int i = 0; i < len-1; i++){
        for(int j = i+1; j < len; j++) {
                if(strcmp(vet[ind[i]],vet[ind[j]])>0){
                    aux = ind[i];
                    ind[i] = ind[j];
                    ind[j] = aux;
                }
        }
    } 
    
    for(int i = 0; i < len; i++){
        printf("%s\n",vet[ind[i]]);
    }
    return 0;
}