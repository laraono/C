/*
Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e
as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar
um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a
intersecção de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.
Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 6}.
*/
#include <stdio.h>
#include <stdlib.h>
int *intersec(int *x1, int *x2, int n1, int n2, int *qtd) {
  int *x3 = NULL;

  x3 = (int *)malloc(sizeof(int) * (n1 + n2));
  if (!x3) {
    exit(-1);
  }
  for (int i = 0; i < n1; i++) {
    int found = 1;
    for (int j = 0; j < n2; j++) {
      if (x1[i] == x2[j]) {
        found = 0;
      }
    }
    if (!found) {
      x3[(*qtd)] = x1[i];
      (*qtd)++;
    }
  }
  x3 = (int *)realloc(x3, sizeof(int) * (*qtd));
  return x3;
}

int main() {
  int *x3;
  int x1[] = {1, 3, 5, 6, 7};
  int n1 = 5;
  int x2[] = {1, 3, 4, 6, 8};
  int n2 = 5;
  int qtd = 0;
  x3 = intersec(x1, x2, n1, n2, &qtd);
  for (int i = 0; i < qtd; i++) {
    printf("%d ", x3[i]);
  }
  free(x3);
}