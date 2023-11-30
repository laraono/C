/*
14) Faça um programa que leia um arquivo texto e produza um novo arquivo. No novo arquivo,
deverá constar o deslocamento que equivale a posição que inicia a linha no arquivo texto e
apresente a posição no console.
*/


#include <stdio.h>
#include <string.h>
int main(void){
    FILE *fp, *fp2;
    char arq[] = "tabela_exemplo_csv.csv";
    char arq2[] = "cursor.txt";
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
    printf("%ld\n",ftell(fp));
  fprintf(fp2,"%ld\n",ftell(fp));
    while(fgets(linha,512,fp)){
            fprintf(fp2,"%ld\n",ftell(fp));
            printf("%ld\n",ftell(fp));
    }
    fclose(fp);   
    fclose(fp2);   
}