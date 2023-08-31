// strlen(str) 
#include <stdio.h>

int tamstr(char *x) {
    char *p = x;
    while ( *p ){ 
        p++;
    }
    return p-x;
}

int main() {
   char a[50] = "Testeeee";
   int b = tamstr(a);
   printf("%d", b);
    return 0;
    
}