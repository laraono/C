#include <stdio.h>

/*
 swap two bytes/words of an integer number
*/

int main()
{
    unsigned int n = 0x1234;
    
        n = ((n >> 8)&0x00ff |(n << 8)&0xff00) ; // 2 bytes
    
    
    printf("%x\n",n);
    
     n = ((n & 0x0F) << 4 | (n & 0xF0) >> 4);// nibbles
     printf("%x",n);
    return 0;
}
