#include <stdio.h>
#include <stdlib.h>

int main() {
   int m = 0;
    int n = 0;
    scanf("%d",&m);
    scanf("%d",&n);
    int **vetor;

    vetor = (int **)malloc(m * sizeof(int *));

    if (vetor == NULL) {
        fprintf(stderr, "Falha na alocação de memória para as linhas.\n");
        exit(-1);
    }

    for (int i = 0; i < m; i++) {
        vetor[i] = (int *)malloc(n * sizeof(int));

        if (vetor[i] == NULL) {
            fprintf(stderr, "Falha na alocação de memória para os elementos da linha %d.\n", i);
             exit(-1);
        }

        for (int j = 0; j < n; j++) {
             scanf("%d",&vet[i][j]);
        }
    }

     // diagonal principal
     for(int i = 0; i < m && i < n; i++) {
            if(i == j) printf("%d",vet[i][i]);
    }

    for (int i = 0; i < m; i++) {
        free(vetor[i]);
    }
    free(vetor);

    return 0;
}
