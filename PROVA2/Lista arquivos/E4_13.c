/*
13) Faça um programa que receba da linha de comando uma string e o nome de um arquivo. O
programa deverá ler o arquivo e apresentar as linhas (o número da linha) que ocorrem a string.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char buffer[512];
  int linha = 1;
    if(argc < 3){
        printf("Insira a string e o nome do arquivo.");
        return -1;
    }
    if(!(fp = fopen(argv[1],"rt"))){
        printf("Erro ao abrir o arquivo.\n");
        return -1;
    }
  
    while(fgets(buffer,512,fp)){
        if(strstr(buffer,argv[2])){
          printf("Achado na linha %d\n",linha);
        }
      linha++;
    }
    fclose(fp);
    return 0;
}