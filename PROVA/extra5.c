#include <stdio.h>

/*
check that whether all bits of a one byte (8 bits) number are UNSET/LOW using C program
*/

int main()
{
    int n;
    int low = 1;
    
    scanf("%d",&n);
    
    for(int i = 7; i >= 0; i--){
        if(!((n>>i)&1)) continue;
        else {
            low = 0;
            break;
        }
    }
    
    if(low) printf("Yes, all bits are unset");
    else printf("No, all bits are not unset");
    return 0;
}
