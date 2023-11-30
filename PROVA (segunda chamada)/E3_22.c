

// E22) Faça uma função que receba um vetor de char e um número e retorne no vetor os valores ‘0’ e ‘1’ correspondente ao valor binário de cada posição do número. Considere números de até 32 bits. (Considere o vetor com 33 posições). Preserve os zeros a direita do digito significativo. Complemente o código (lembrem-se do include stdio.h):

#include <stdio.h>

void func(char vet[], int num) {
   for(int i=31; i >= 0; i--){
        vet[i] = (num & 1) + '0';
        num >>= 1;
    }
    vet[32] = '\0';
}

int main(void) {
    int num;
    char str[33];
    scanf("%d",&num);
    func(str,num);
    printf("%s\n",str);
}
