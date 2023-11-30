/* Faça um programa que leia N e uma
lista de N números, armazene-os em
memória, calcule e apresente a média
deles.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 0, sum = 0;
    int *p = NULL;
    float media = 0;
    printf("Quantos números?");
    scanf("%d\n",&n);
    p = (int *) malloc(sizeof(int)*n);
    if(!p){
        printf("error");
        exit(-1);
    }
    for(int i=0; i<n; i++){
        scanf("%d",(p+i));
        sum += *(p+i);
    }
    media = (float)sum/n;
    printf("%.2f",media);
    free(p);
}