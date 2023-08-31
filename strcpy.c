// strcpy(str1, str2)
#include <stdio.h>

int copia(char *x, char *y) {
    char *p = x;
    while ( *p ){ 
        *y = *p;
        y++;
        p++;
    }
    *y ='\0';
}

int main() {
   char a[50] = "Testeeee";
   char b[50];
   copia(a,b);
   printf(b);
    return 0;
    
}