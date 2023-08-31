#include<stdio.h>

int main() {
    int n=0x0;
    for (int coluna = 1; coluna <= 16; coluna++){
    for (int linha=1;linha<=16;linha++){
           printf("%x\t",n);
           n++;
        }
           printf("\n");
    }
}