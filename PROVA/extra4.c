#include <stdio.h>

/*
Program to swap 1st and 2nd bit of hexadecimal value stored in data variable
*/

int main()
{
  
    unsigned char hexa = 0xA;
    int n1 = 1, n2 = 2;
    unsigned char bit_n1  = (hexa >> n1)&1;
    unsigned char bit_n2  = (hexa >> n2)&1;
    unsigned char bit_intersec = (bit_n2 ^ bit_n1);
    bit_intersec = (bit_intersec << n1) | (bit_intersec << n2);
    hexa ^= bit_intersec;
    printf("Swapped %d bit and %d bit = %X", n1, n2, hexa);
    return 0;
}
