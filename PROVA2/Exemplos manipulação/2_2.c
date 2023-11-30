// 2) Como ler um arquivo texto linha a linha?
// *fgets(char *s, int size, FILE *stream);
#include <stdio.h>

#define TAM_BUFFER = 32768;
int main(void) {
    FILE *fp;
    char buffer[TAM_BUFFER], *var;
    char arq[]  = "lista.teste";
    if(!(fp = fopen(arq,"rt"))){
        printf("Arquivo não encontrado");
        return -1;
    }
    printf("Arquivo encontrado\n");
    while(!feof(fp)){
        if(fgets(buffer, TAM_BUFFER, fp)){
            var = buffer;
            while(*var != '\0'){
                if(*var == '\n'){
                    *var = '\0';
                }
                else {
                    var++;
                }
            }
            puts(buffer);
        }
    }
        fclose(fp);
    return 0;
}