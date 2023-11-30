/* 12) Faça um programa que leia um arquivo CSV e converta-o para um arquivo delimitado por
tabulação. As tabulações internas dos campos do CSV deverão ser substituídas por 4 espaços em
branco.
*/

#include <stdio.h>
#include <string.h>
int main(void){
    FILE *fp, *fp2;
    char arq[] = "tabela_exemplo_csv.csv";
    char arq2[] = "tab.txt";
    char linha[512];
    if(!(fp=fopen(arq,"rt"))){
         printf("Erro ao abrir o arquivo.\n");
        return -1;
    }
     if(!(fp2=fopen(arq2,"wt"))){
         printf("Erro ao abrir o arquivo.\n");
         fclose(fp);
        return -1;
    }
    while(fgets(linha,512,fp)){
      for(int i = 0; i < 512 && linha[i]; i++){
        if(linha[i] ==';'){
            linha[i] = '\t';
        }
      }
              fputs(linha,fp2);
    }
    fclose(fp);   
     fclose(fp2); 
}