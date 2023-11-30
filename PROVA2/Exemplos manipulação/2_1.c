// 1) Como ler um arquivo símbolo a símbolo?

#include <stdio.h>

int main(void) {
    FILE *fp;
    char arq[]  = "lista.teste",var;
    if(!(fp = fopen(arq,"rt"))){
        printf("Arquivo não encontrado");
        return -1;
    }
    printf("Arquivo encontrado\n");
    while(!feof(fp)){
      var = fgetc(fp);
      putchar(var);
        }
    }
        fclose(fp);
    return 0;
}