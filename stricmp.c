// stricmp(str1,str2) compara as strings
#include <stdio.h>
#include <ctype.h>

int compara(char *x, char *y) {

    char *p = x;
    char *q = y;
    while (( *p ) || ( *q )) { 
       
        if (toupper(*p) > toupper(*q) ) {
            return 1;
        }
        else if (toupper(*p) < toupper(*q) ) {
            return -1;
        }
         q++;
        p++;
    }

        return 0;
    
}

int main() {
   char a[50] = "TESTEEEE";
   char b[50] = "Testeeee";
   printf("%d",compara(a,b));
    return 0;
    
}