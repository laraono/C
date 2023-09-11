//  how many minimum bit(s) are required to store an integer number

#include <stdio.h>

int main(void){
    int n = 5, i;
 
    while(n > 0){
        if((n&1)) printf("%c",'1');
        else printf("%c",'0');
        n >>= 1;
        i++;
    }
    printf("\n%d",i);
}