// strlen
#include <stdio.h>

int lenstr(const char vet[]){
    int i=0;
    while(vet[i]){
        i++;
    }
    return i;
}

int lenstr_ptr(const char *vet){
    char *ptr = NULL;
    ptr = (char *)vet;
    while(*ptr){
        ptr++;
    }
    return ptr-vet;
}

void main(void){
    char str[60];
    gets(str);
    printf("%d\n",lenstr(str));
    printf("%d\n",lenstr_ptr(str));
}