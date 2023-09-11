/* E22) Faça uma função que receba um vetor de char e um número e retorne no vetor os valores ‘0’ e ‘1’ correspondente ao valor binário de cada posição do número. Considere números de até 32 bits. (Considere o vetor com 33 posições). Preserve os zeros a direita do digito significativo.
 */
#include<stdio.h>

char toBinary(char vet[], int n){
    int i = 31;
    while(i >= 0){
        vet[i] = (n&1)+'0';
        n >>= 1;
        i--;
    }
    vet[32] = '\0';
}

int main() {
    char str[33]={0};
    int n = 0;
    scanf("%d",&n);
    toBinary(str,n);
    printf("%s",str);
    return 0;
}