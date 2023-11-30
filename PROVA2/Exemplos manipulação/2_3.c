// 3) Como ler um arquivo binário?

#include <stdio.h>

int main(void) {
    FILE *fp;
    char arq[] = "lista.teste";
    char simbolo;
    int numero;
    float moeda;
    double pi;
    int vetor[5];
    if(!(fp = fopen(arq,"rb"))){
        printf("Erro");
    }
    printf("Sucesso");
    fread((void *)&simbolo, sizeof(char), 1, fp);
    fread((void *)&numero, sizeof(int), 1, fp);
    fread((void *)&moeda, sizeof(float), 1, fp);
    fread((void *)&pi, sizeof(double), 1, fp);
    fread(vetor, sizeof(int), 5, fp);
    printf("%c %d %f %lf %d %d %d %d %d", simbolo, numero, moeda, pi, vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
    fclose(fp);
}