/*
09). Altere o programa do exercício anterior, modificando o arquivo de formato fixo para
formato delimitado por tabulação, ou seja, entre o campo nome e telefone será usado um tab
(\t) para separar os campos
*/

#include <stdio.h>
#include <string.h>
int main(void){
    FILE *fp;
    char arq[] = "contatos.txt";
    struct contato {
        char nome [50];
        char  tel[10]; 
    }ctt;
    if(!(fp=fopen(arq,"wt"))){
         printf("Erro ao abrir o arquivo.\n");
        return -1;
    }
    do {
        printf("Insira um nome ou zero para encerrar\n");
        gets(ctt.nome);
      if(strcmp(ctt.nome, "0") != 0){
        ctt.nome[strcspn(ctt.nome, "\n")] = 0;
        printf("Insira um número de telefone \n");
        gets(ctt.tel);
        ctt.tel[strcspn(ctt.tel, "\n")] = 0;
        fprintf(fp,"%s\t%s\n", ctt.nome, ctt.tel);
      }
    }while(strcmp(ctt.nome, "0") != 0);
  fputs("\0", fp);
    fclose(fp);   
}