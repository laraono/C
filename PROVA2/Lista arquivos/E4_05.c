/* 05) Faça um programa no qual o usuário informa o nome do arquivo, e uma palavra, e retorne
o(s) número(s) da(s) linha(s) em que a palavra ocorra no arquivo.
*/
#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fp;
    int numfound = 0;
    char buffer[512];

    if(argc < 3){
         printf("Por favor, forneça o nome dos arquivos como argumento.\n");
        return -1;
    }
 
    if(!(fp=fopen(argv[1],"rt"))){
         printf("Erro ao abrir o arquivo.\n");
        fclose(fp);
        return -1;
    }

    while(fgets(buffer,512,fp)){
      
      if(strstr(buffer,argv[2])){
          numfound++;
      }
    }
    printf("%d", numfound);
    fclose(fp);   
}