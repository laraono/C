#include <stdio.h>

char* strfnd(char c, char str[]){
    int a = 0;
    while(str[a]){
        if(str[a]==c){
            return &str[a];
        }
        a++;
    }
    return NULL;
}

char* strfnd_ptr(char c, char *str[]){
    char *ptr = NULL;
    ptr = str;
    while(*ptr){
        if(*ptr == c){
            return ptr;
        }
        ptr++;
    }
    return NULL;
}

void main(void){
    char *res=NULL;
    char car;
    char str[60];
    printf("caracter");
    car = getchar();
    getchar();
    printf("strng");
    gets(str);
    res = strfnd_ptr(car, str);
    if( res ) {
        printf("encontrado: %d\n",res);
        }
    return 0;
}