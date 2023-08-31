// strcat(str1, str2)
#include <stdio.h>

void concatena(char *x, char *y) {
    char *p = x;
    char *q = y;
    while ( *p ){ 
        p++;
    }
    
    while ( *q ) {
        *p = *q;
        q++;
        p++;
    }
    *p = '\0';
}

int main() {
   char a[50] = "Testeeee";
   char b[50] = "Testeeee";
   concatena(a,b);
   printf(a);
    return 0;
    
}