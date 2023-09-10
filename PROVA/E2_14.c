// E2_14) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente a soma de cada coluna. A saída deverá ter um número por linha.

#include <stdio.h>

int main(void){
    int n[3][4]={0};
    int sum[4] = {0};
    
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 4; j++) {
        scanf("%d",&n[i][j]);
        sum[j] += n[i][j];
        }
    }
     for(int i=0; i < 4; i++) printf("%d\n",sum[i]);
    
    return 0;
}