/* E2_20) Faça um programa que leia 10 valores e armazene-os em um vetor. 
Na sequência, leia um número e procure esse número no vetor. 
Se encontrar, apresente o índice da posição da primeira que ocorrência do número, caso contrário apresente o valor -1.. */
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    int vec[10];
    int read;
    bool found = false; // Inicializa a variável 'found' como falso

    // Leitura dos valores para o vetor
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vec[i]);
    }
    
    // Leitura do número a ser procurado
    scanf("%d", &read);

    // Procura o número no vetor
    for (int i = 0; i < 10; i++) {
        if (read == vec[i]) {
            found = true;  // Define 'found' como verdadeiro quando encontra o número
            printf("%d\n", i);
        }
    }
    
    // Se o número não foi encontrado, imprime -1
    if (!found) {
        printf("-1");
    }

    return 0;
}
