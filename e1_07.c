#include <stdio.h>

int main() {
    int num[3]; // Vetor para armazenar três números
    int maior;

    // Preencher o vetor com os três números informados pelo usuário
    for (int i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }

    // Ordenar os números em ordem crescente usando Bubble Sort
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (num[j] > num[j + 1]) {
                maior = num[j];
                num[j] = num[j + 1];
                num[j + 1] = maior;
            }
        }
    }

    // Apresentar os números em ordem crescente
    for (int i = 0; i < 3; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}
