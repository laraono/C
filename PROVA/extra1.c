//  Get Binary values of an input number in C: In this C program, we will read an integer (decimal) number and print its Binary values (Binary number). 

#include <stdio.h>

int main(void){
    int n = 5;
 
    for(int i=31; i >= 0; i--){
        if((1 << i)&n) printf("%c",'1');
        else printf("%c",'0');
    }
}