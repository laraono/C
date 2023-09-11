//  C program to count number of 1's in an integer number.

#include <stdio.h>

int main(void){
    int n = 5, i;
 
    while(n > 0){
        if((n&1)) i++;
        n >>= 1;
    }
    printf("\n%d",i);
}