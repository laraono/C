/* E2_16) Faça um programa que leia 10 valores e armazene-os em um vetor.  
Na sequência, leia dois valores inteiros que estejam entre 0 e 9 (índices a e b) e apresente os valores lidos (vetor) que estejam entre os índices a e b. */
#include<stdio.h>

int main() {
    int num;
    int vec[10];
    int a,b;
    for (int i=0; i<10;i++){
            scanf("%d",&num);
            vec[i] = num;   
    }
    scanf("%d\n%d",&a,&b);
     for (int i=a; i<=b;i++){
                printf("%d\n",vec[i]);
        
    }
    
    return 0;
}