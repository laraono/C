/* Faça um programa que leia 10 valores e armazene-os em um vetor. 
Na sequência, apresente os valores contidos no vetor que sejam a moda do conjunto (os valores com maior ocorrência no vetor. 
No caso de empate, apresente os valores com igual frequência). */
#include<stdio.h>

int main() {
    int num;
    int vec[10];
    int count[10]={0};
    int max=0;
    for (int i=0; i<10;i++){
            scanf("%d",&vec[i]);
    }
    
      for(int i=0; i<10;i++){
            count[vec[i]]++;
          }
        
        for(int i=0; i<10;i++){
            if (count[i] > max){
                max=count[i];
            }
        }
        for(int i=0; i<10;i++){
            if (count[i] == max)
                 printf("%d\n",i);
        }
    return 0;
}