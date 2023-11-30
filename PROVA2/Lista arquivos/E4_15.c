/*
15) Faça um programa que receba da linha de comando o nome do arquivo texto, o arquivo de
índice criado no exercício 14 e um número de linha. O programa deverá localizar o deslocamento
do número da linha informada no arquivo de índice e depois abrir o arquivo original, deslocar
para a posição, ler a linha e apresentá-la para o usuário final.
*/

#include <stdio.h>
#include <string.h>
int main(void){
    FILE *fp, *fp2;
    char arq[] = "tabela_exemplo_csv.csv";
    char arq2[] = "cursor.txt";
    char linha[512];
    int indice = 3;
    long cursor;
    if(!(fp=fopen(arq,"rt"))){
         printf("Erro ao abrir o arquivo.\n");
        return -1;
    }
     if(!(fp2=fopen(arq2,"rt"))){
         printf("Erro ao abrir o arquivo.\n");
         fclose(fp);
        return -1;
    }
    for(int i = 0; i < indice; i++){
        fscanf(fp2,"%ld",&cursor);
    }
    fseek(fp,cursor,SEEK_SET);
    fgets(linha,512,fp);
    printf("%s\n",linha);

    fclose(fp);   
    fclose(fp2);   
}