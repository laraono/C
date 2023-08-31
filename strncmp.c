// strncmp(str1,str2)
#include <stdio.h>
#include <ctype.h>

int compara(char *x, char *y, int z) {

    char *p = x;
    char *q = y;
    for (int i; i < z; i++, q++, p++) { 
       
        if ((*p) > (*q) ) {
            return 1;
        }
        else if ((*p) < (*q) ) {
            return -1;
        }
    }

        return 0;
    
}

int main() {
   char a[50] = "TESTEEE";
   char b[50] = "TESTEeee";
   int n = 5;
   printf("%d",compara(a,b,n));
    return 0;
    
}