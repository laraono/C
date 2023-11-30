/*
07). Faça um programa que leia um arquivo com os preços de diversos produtos, e calcule o
total por compra. Considere que cada linha tem somente o nome do produto, seguida de uma
tabulação e o valor do produto.
*/
#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char nome[512]= {};
    int total = 0, valor = 0;
    if(argc < 2){
         printf("Por favor, forneça o nome dos arquivos como argumento.\n");
        return -1;
    }

    if(!(fp=fopen(argv[1],"rt"))){
         printf("Erro ao abrir o arquivo.\n");
        return -1;
    }

    while(!feof(fp)){
      fscanf(fp,"%[^\t]\t%d\n", nome, &valor);
        total += valor;
    }
    printf("%d", total);
    fclose(fp);   
}