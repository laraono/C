#include <stdio.h>

char* strfnd(char str1[], char str2[]){
    int a = 0;
    int b = 0;
    for(a=0;str1[a];a++){
        for(b=0;str2[b];b++){
            if(str1[a+b]!=str2[b]){
               break;
            }
        }
        if(str2[b]=='\0'){
            return str1[a];
        }
    }
    return NULL;
}

char* strfnd_ptr(char *str1, char *str2){
    char *ptr1 = NULL;
    char *ptr2= NULL;

    for(;*str1;str1++){
        ptr1 = str1;
        ptr2 = str2;
        for(;*ptr2;ptr2++, ptr1++){
            if(*ptr1 != *ptr2){
               break;
            }
        }
        if(*ptr2==0){
            return *str1;
        }
    }
    return NULL;
}

void main(void){
    char *res=NULL;
    char str1[60];
    char str2[60];
    gets(str1);
    gets(str2);
        res = strfnd(str1, str2);
    if( res ) {
        printf("encontrado: %c\n",res);
        }
    res = strfnd_ptr(str1, str2);
    if( res ) {
        printf("encontrado: %c\n",res);
        }
    
    return 0;
}