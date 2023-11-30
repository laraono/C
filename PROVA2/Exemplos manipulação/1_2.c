// 2) Como criar um arquivo texto?

#include <stdio.h>

int main(void) {
    FILE *fp;
    char arq[]  = "lista.teste";
    if(!(fp = fopen(arq,"wt"))){
        printf("Erro");
        exit(-1);
    }
        printf("Arquivo criado");
        fclose(fp);
    return 0;
}