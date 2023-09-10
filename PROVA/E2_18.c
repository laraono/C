//  E2_18) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores contidos no vetor, onde a diferença entre os valores contidos em dois elementos sucessivos não seja maior do que um.

#include <stdio.h>

int main(void){
    int n[10]={0};
    int aux;
    
    for(int i=0; i < 10; i++) {
        scanf("%d",&n[i]);
    }
   
     for(int i=1; i < 10 ; i++) {
         if((n[i]-n[i-1] <= 1) && (n[i]-n[i-1] > 0)) {
             printf("%d %d\n",n[i-1],n[i]);
         }
    }
    return 0;
}
