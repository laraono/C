/* E2_17) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores do maior para o menor. */
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
        for(int b=i-1; b>=a; b--){
            if(vec[b-1]>vec[b]){
                t = vec[b-1];
                vec[b-1]=vec[b];
                vec[b]=t;
            }
        }
    }
    for (i=10; i>0;i--){
           printf("%d\n",vec[i-1]); 
    }
    return 0;
}