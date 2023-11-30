#include <stdio.h>
#include <ctype.h>
int main() {
    char texto[1000], *p = texto;
    int qdade = 0, interno = 0;
    gets(texto);
    while(*p) {
        if(isalnum(*p)) {
            interno = 1;
        } else {
            if(interno){
                qdade++;
            }
            interno = 0;
        }
        p++;
    }
    if(interno) {
        qdade++;
    }
    printf("quantidade %d\n",qdade);
}
