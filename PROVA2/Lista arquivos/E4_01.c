/*
01) Codifique, compile e execute um programa que:
a) crie/abra um arquivo texto de nome ”arq.txt”,
b) permita que o usuário entre com diversos caracteres nesse arquivo, até que o usuário
entre com o caractere ’0’
c) reinicie o arquivo, fazendo o ponteiro apontar para seu início, e
d) lendo-o caractere por caractere, e escrevendo na tela todos os caracteres
armazenados.
*/

#include <stdio.h>

int main(){
    FILE *fp;
    int num;
    char str[512];
    char arq[] = "lista.teste";

    if(!(fp = fopen(arq,"wt"))){
        printf("Erro");
      exit(-1);
    }

    do{
        printf("Insira um número ou 0 para encerrar\n");
        scanf("%d",&num);
        if(num){
            fprintf(fp,"%d\n",num);
        }
    }while(num);
  fclose(fp);
  if(!(fp = fopen(arq,"rt"))){
      printf("Erro");
    exit(-1);
  }
    while(fgets(str,512,fp)){ 
        printf("%s",str);
    }
    fclose(fp);
}