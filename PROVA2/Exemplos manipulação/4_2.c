// 2) Com base da informação do programa anterior, como podemos ler apenas a quarta linha do programa, sem ler as linhas anteriores?

#include <stdio.h>

int main(){
     FILE *fp;
    long num;
    char buffer[512];
    char arq[] = "lista.teste";
    if(!(fp = fopen(arq,"rt"))){
        printf("Erro");
    }
    printf("Sucesso\n");
    fseek(fp, 4, SEEK_SET);
  num = ftell(fp);
    while(fgets(buffer, 512, fp)){
        printf("%d\n", num);
        fgets(buffer, 512, fp);
        puts(buffer);
        num = ftell(fp);
    }
    fclose(fp);
}