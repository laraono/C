// E1_07) Faça um programa que leia três números e os apresente em ordem crescente. Apresente um número por linha.

#include <stdio.h>

int main(void){
    int n[3],aux;
    for(int i=0;i<3;i++) {
        scanf("%d",&n[i]);
    }
   
   for(int i=0;i<2;i++){
       for(int j=0;j<2-i;j++){
           if(n[j] > n[j+1]){
               aux = n[j];
               n[j] = n[j+1];
               n[j+1] = aux;
           }
       }
   }
   
    for(int i=0;i<3;i++) {
        printf("%d\n",n[i]);
    }
    return 0;
}