/*
Leitura de coluna fixa
*/

#include <stdio.h>
#include <string.h>
int main(void) {
  FILE *fp;
  char arq[] = "contatos.txt";
  struct contato {
    char nome[50];
    char tel[10];
  } ctt;
  if (!(fp = fopen(arq, "rt"))) {
    printf("Erro ao abrir o arquivo.\n");
    return -1;
  }
  while (fread(ctt.nome, sizeof(char), 49, fp)) {

    fread(ctt.tel, sizeof(char), 10, fp);

    printf("%s %s\n", ctt.nome, ctt.tel);
  }
  fclose(fp);
}