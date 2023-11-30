// E2_19) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores contidos no vetor que sejam a moda do conjunto (os valores com maior ocorrência no vetor. No caso de empate, apresente os valores com igual frequência).

#include <stdio.h>

int main(void) {
    int num[10],freq[10], maior;
    for(int i=0; i < 10; i++) {
        scanf("%d",&num[i]);
        freq[num[i]]++;
    }
    for(int i=0; i < 10; i++) {
        if(freq[i] > maior) maior = freq[i];
    }
    for(int i=0; i < 10; i++) if(freq[num[i]] == maior) printf("%d\n",num[i]);
     
}