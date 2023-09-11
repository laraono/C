/* 
E30) Faça um programa que leia 10 nomes e apresente os índices do vetor de nomes lidos, de forma, que se forem utilizados na apresentação, os nomes estarão ordenados. Observe que o vetor de nomes não sofre alteração.
 */
#include<stdio.h>
#include<string.h>

int main() {
    char nomes[10][33];
    int ind[10], aux;
    for(int i = 0; i < 10; i++) {
        gets(nomes[i]);
        ind[i] = i;
    }
    
     for(int i = 0; i < 9; i++) {
      for(int j = i+1; j < 10; j++) {
          if(strcmp(nomes[ind[i]],nomes[ind[j]])>0){
                aux = ind[i];
                ind[i] = ind[j];
                ind[j] = aux;
          }
      }
     }
     
     for(int i = 0; i < 10; i++) printf("%d\n",ind[i]);
    return 0;
}