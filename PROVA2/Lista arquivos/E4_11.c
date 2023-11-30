/*
11) Faça um programa que leia o arquivo de municípios disponível no servidor ftp do IBGE e
apresente a UF e o número de municípios lido.
*/

#include <stdio.h>
#include <string.h>
int main(void){
    FILE *fp;
    char arq[] = "cidades_separador_tab.txt";
    char linha[512];
  int i=0;
    struct registro {
        char cidade [41];
        char UF[3]; 
    }reg;
    if(!(fp=fopen(arq,"rt"))){
         printf("Erro ao abrir o arquivo.\n");
        return -1;
    }
  fgets(linha,512,fp);
    while(fgets(linha,512,fp)){
      i++;
      sscanf(linha,"%s\t", reg.UF);
        printf("%s\n",reg.UF);
    }
  printf("%d lidos", i);
    fclose(fp);   
}