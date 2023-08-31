// E2_14) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente a soma de cada coluna. A saída deverá ter um número por linha.
#include<stdio.h>

int main() {
    int num;
    int vec[3][4];
    for (int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            scanf("%d",&num);
            vec[i][j] = num;   
        }
    }
     for (int j=0; j<4;j++){
         int soma=0;
         for(int i=0; i<3;i++){
             soma += vec[i][j];
         }
            printf("%d\n", soma);
         }
    
    return 0;
}