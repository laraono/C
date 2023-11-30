// 2) Como criar um arquivo binario?

#include <stdio.h>

int main(void) {
    FILE *fp;
    char arq[]  = "lista.teste";
    if(!(fp = fopen(arq,"wb"))){
        printf("Erro");
        exit(-1);
    }
        printf("Arquivo criado");
    fclose(fp);
    return 0;
}