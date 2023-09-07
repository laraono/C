/* E28) Faça um programa que leia uma string e apresente os símbolos e a frequência (número de ocorrência de cada símbolo na string lida). O programa deverá apresentar um símbolo e a frequência por linha e omitir os símbolos que não ocorram (frequência zero). Considere o intervalo de 32 a 128 da tabela ASCII.
*/

#include <stdio.h>

int main(){
    char str[100];
    int i, ascii;
    int ind[96]={0};
    gets(str);

    while(str[i]){
        ascii = (int)str[i];
        ind[ascii-32]++;
        i++;
    }

    for(int j=0; j < 96; j++){
        if(ind[j] != 0){
            printf("%c %d\n", j+32,ind[j]);
        }
    }
}