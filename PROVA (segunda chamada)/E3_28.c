// E28) Faça um programa que leia uma string e apresente os símbolos e a frequência (número de ocorrência de cada símbolo na string lida). O programa deverá apresentar um símbolo e a frequência por linha e omitir os símbolos que não ocorram (frequência zero). Considere o intervalo de 32 a 128 da tabela ASCII.

#include <stdio.h>

int main(void) {
    char texto[50]={};
    char ascii[96]={};
    gets(texto);
    for(int i=0; texto[i]; i++){
        ascii[texto[i]-32]++;
    }
    for(int i=0; i<96; i++){
        if(ascii[i]) printf("%c %d\n", i+32, ascii[i]);
    }
}