//2) Como escrever dados em um arquivo binário?
#include <stdio.h>

int main(void) {
    FILE *fp;
    char arq[] = "lista.teste";
    char simbolo = 'A';
    int numero = 10;
    float moeda = 12.25f;
    double pi = 3.141569;
    int vetor[] = {1,2,3,4,5};
    if(!(fp = fopen(arq,"wb"))){
        printf("Erro");
    }
    printf("Sucesso");
    fwrite((void *)&simbolo, sizeof(char), 1, fp);
    fwrite((void *)&numero, sizeof(int), 1, fp);
    fwrite((void *)&moeda, sizeof(float), 1, fp);
    fwrite((void *)&pi, sizeof(double), 1, fp);
    fwrite(vetor, sizeof(int), 5, fp);

    fclose(fp);
}