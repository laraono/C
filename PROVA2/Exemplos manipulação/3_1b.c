// 1) Como escrever em um arquivo texto?
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    char buffer[32768], *var;
    char arq[]  = "lista.teste";
    if(!(fp = fopen(arq,"wt"))){
        printf("Arquivo não encontrado");
        fclose(fp);
        return -1;
    }
    printf("Arquivo encontrado\n");
    fputc('o',fp);
    fputs("Era uma vez...\n",fp);
    fprintf(fp,"%d anos",15);
        fclose(fp);
    return 0;

}