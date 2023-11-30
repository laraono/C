/* 06) Faça um programa em C que recebe como entrada o nome de um arquivo de entrada e o
nome de um arquivo de saída. Cada linha do arquivo de entrada possui colunas de tamanho de
no máximo 90 caracteres. No arquivo de saída deverá ser escrito o arquivo de entrada de forma
inversa. Exemplo:
Arquivo de entrada:
Hoje e dia de prova de LP
A prova esta muito fácil
Arquivo de saída:
licaf otium átse avorp A
PL ed avorp ed aid e ejoH */

#include <stdio.h>
#include <string.h>

void strrev(char *str) {
    char *p1, *p2;

    if (!str || !*str)
        return;

    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
}


int main(int argc, char *argv[]) {
  FILE *f1, *f2;
  char **vetor;
  char buffer[512];
  int linha = 0;
  if (argc < 3) {
    printf("Por favor, forneça o nome dos arquivos como argumento.\n");
    return -1;
  }

  if (!(f1 = fopen(argv[1], "r"))) {
    printf("Erro ao abrir o arquivo.\n");
    return -1;
  }
  if (!(f2 = fopen(argv[2], "w"))) {
    printf("Erro ao abrir o arquivo.\n");
    fclose(f1);
    return -1;
  }
  while (fgets(buffer, 512, f1)) {
    linha++;
  }
  vetor = (char **)malloc(linha*sizeof(char *));
  fseek(f1,0L,SEEK_SET);
  for (int i = 0; i < linha; i++) {
    vetor[i] = (char *)malloc(512*sizeof(char));
    fgets(vetor[i], 512, f1);
    strrev(vetor[i]);
  }
  for (int i = linha-1; i >=0; i--) {
    fputs(vetor[i],f2);
  }

  fclose(f1);
  fclose(f2);

  return 0;
}
