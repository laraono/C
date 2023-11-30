#include <stdio.h>

typedef struct { 
    int lido;
    int gerado;
    double valor;
    char texto[20];
}REG;

int main(){
    REG saida;
    FILE *fp;
    char arq[] = "saida.dat";

    if(!(fp = fopen(arq,"rb"))){
        printf("Erro ao abrir arquivo");
        return -1;
    }
    while(fread((void *)&saida, sizeof(REG), 1, fp)){
       printf("%d %d %lf %s\n", saida.lido, saida.gerado, saida.valor, saida.texto);
    }
    fclose(fp);
    return 0;
}