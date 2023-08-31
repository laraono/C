#include <stdio.h>

int main() {
    int N;
    int N2;
    int aux1;
    int aux2;
    int resto;
    scanf("%d", &N);
    scanf("%d", &N2);
    
  if(N>N2){
    resto =  N % N2 ;
      aux1 = N2;
      while(resto != 0){
         aux2 =  aux1 % resto;
          aux1 = resto;
          resto = aux2;
      }
  }
  else {
     resto =  N2 % N ;
      aux1 = N;
      while(resto != 0){
         aux2= aux1 % resto ;
          aux1 = resto;
          resto = aux2;
  }
  }
    printf("%d",aux1);
    return 0;
}
