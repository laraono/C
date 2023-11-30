// 1) Como verificar se um arquivo existe no Sistema Operacional?

#include <stdio.h>

int main(void) {
    FILE *fp;
    char arq[]  = "lista.teste";
    if(!(fp = fopen(arq,"r"))){
        printf("Arquivo não encontrado");
        exit(-1);
    }
    else {
        printf("Arquivo encontrado");
    }
    fclose(fp);
    return 0;
}