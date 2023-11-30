#include <stdio.h>

int main(){
    char txt[100] = {},*p = NULL;
    gets(txt);
    p = &txt;

    while(*p){
        char *p2 = NULL;
        p2 = p;
        while(*p2){
            printf("%c",*p2);
            p2++;
        }
        printf("\n");
        p++;
    }

}