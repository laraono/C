/* 
E28) Faça um programa que leia uma string e apresente os símbolos e a frequência (número de ocorrência de cada símbolo na string lida). O programa deverá apresentar um símbolo e a frequência por linha e omitir os símbolos que não ocorram (frequência zero). Considere o intervalo de 32 a 128 da tabela ASCII.
 */
#include<stdio.h>
#include<string.h>

int main() {
    char str[33]={0};
    int freq[96]={0};
    scanf("%s",str);
    for(int i = 0; str[i]; i++){
        freq[str[i]-32]++;
    }
    
   for(int i = 0; i < 96; i++){
        if(freq[i]) printf("%c %d\n",i+32,freq[i]);
    }
    return 0;
}