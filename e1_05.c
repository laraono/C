// E1_05) Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).
#include <stdio.h>

int main() {
    
    int num;
    int maior;
    scanf("%d", &maior);
     
    for(int i=1; i<10; i++){
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
    }
    printf("%d",maior);
    return 0;
}