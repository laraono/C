#include<stdio.h>

int main() {
    int resultado=0;
    for (int n = 1; n <= 100; n++){
        for (int i=2; i<=(n/2);i++){
            if(n%i == 0) {
                resultado++;
                break;
            }
        }
        if (resultado == 0) {
          printf("%d ", n);   
        }
        resultado=0;
    }
}