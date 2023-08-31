#include <stdio.h>

int main() {
    int n=1;
    for (int linha=1;linha<=5;linha++){
       for(int coluna=1;coluna<=linha;coluna++){
           printf("%d\t",n);
           n++;
       }
       printf("\n");
    }

}
