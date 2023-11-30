// 1) Como escrever em um arquivo texto?
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp, *fd;
    char buffer[32768], *var;
    char arq[]  = "lista.teste";
    char arq2[]  = "lista2.teste";
    if(!(fp = fopen(arq,"rt"))){
        printf("Arquivo não encontrado");
        fclose(fp);
        return -1;
    }
    if(!(fd = fopen(arq2,"wt"))){
        printf("Erro no arquivo 2");
        fclose(fp);
        fclose(fd);
        return -1;
    }
    printf("Arquivo encontrado\n");
    while(!feof(fp)){
        if(fgets(buffer, 32768, fp)){
            fputs(buffer,fd);
        }
    }
        fclose(fp);
        fclose(fd);
    return 0;

}