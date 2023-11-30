// Faça um programa que leia dois números A e B e apresente o maior divisor comum dos dois números.

#include <stdio.h>

int main(void) {
    int n1,n2, maior, menor, res;
     scanf("%d",&n1);
     scanf("%d",&n2);
  if(n1 > n2){
       maior = n1;
       menor = n2;
  }
  else {
      maior = n2;
       menor = n1;
  }
  res = maior % menor;
   while( res != 0 ) {
           maior = menor;
           menor = res;
           res = maior % menor;
       }
    printf("%d\n",menor);
     
}