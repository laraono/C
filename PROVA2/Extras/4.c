/*
3) Construa um programa (main) que aloque em tempo de execução (dinamicamente)
uma matriz de ordem m x n (linha por coluna), usando 1+m chamadas a função
malloc. Agora, aproveite este programa para construir uma função que recebendo os
parametros m e n aloque uma matriz de ordem m x n e retorne um ponteiro para esta
matriz alocada. Crie ainda uma função para liberar a área de memória alocada pela
matriz. Finalmente, crie um novo programa (main) que teste/use as duas funções
criadas acima.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int m, n, **mat;
    scanf("%dx%d",&m,&n);
    mat = (int **)malloc(sizeof(int)*m);
    for(int i = 0; i < m; i++){
    mat[i] = (int *)malloc(sizeof(int)*n);
        for(int j=0; j<n; j++){
            mat[i][j] = 1;
        }
    }
    for(int i = 0; i < m; i++){
    for(int j=0; j<n; j++){
            printf("%d",mat[i][j]);
        }
      printf("\n");
    free(mat[i]);
    }
    free(mat);

}