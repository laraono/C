// E2_12) Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal principal.
#include<stdio.h>

int main() {
    int num;
    int vec[3][3];
    for (int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            scanf("%d",&num);
            vec[i][j] = num;   
        }
    }
     for (int i=0; i<3;i++){
         for(int j=0; j<3;j++){
             if(j==i){
            printf("%d\n",vec[i][j]);
             }
         }
    }
    return 0;
}