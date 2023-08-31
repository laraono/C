/* E2_18) Faça um programa que leia 10 valores e armazene-os em um vetor. 
Na sequência, apresente os valores contidos no vetor, onde a diferença entre os valores contidos em dois elementos sucessivos não seja maior do que um. */
#include<stdio.h>

int main() {
    int num;
    int vec[10];
    int i;
    int t;
    for (i=0; i<10;i++){
            scanf("%d",&num);
            vec[i] = num;   
    }
    for(int a=1; a<i; a++){
            if(vec[a]-vec[a-1]<=1 && vec[a]-vec[a-1] > 0){
                 printf("%d %d\n",vec[a-1],vec[a]); 
            }
        
    }
    return 0;
}