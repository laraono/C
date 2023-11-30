// 1) Como encontrar a posição física do início de cada linha em um arquivo texto?

#include <stdio.h>

int main(void) {
    FILE *fp;
    long num;
    char buffer[512];
    char arq[] = "lista.teste";
    if(!(fp = fopen(arq,"rt"))){
        printf("Erro");
    }
    printf("Sucesso\n");
  num = ftell(fp);
    while(fgets(buffer, 512, fp)){
        printf("%d\n", num);
        num = ftell(fp);
    }
    fclose(fp);
}