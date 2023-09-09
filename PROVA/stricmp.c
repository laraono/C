// strcmp(str1,str2) compara as strings
#include <stdio.h>
char upper(const char str){
    char aux=str;
        if(aux >= 'a' && aux <= 'z'){
            aux-= 32;
        }
     return aux;
}

char cmpstr(const char str1[], const char str2[]) {
    int a=0;
    char x,y;
    while(str1[a] && str2[a]) {
        x=upper(str1[a]);
        y=upper(str2[a]);
        if(x!=y){
            break;
        }
        a++;
    }
    return x - y;
}

char cmpstr_ptr(const char *str, const char *str2){
    char *ptr1 = NULL;
    char *ptr2= NULL;
    char x,y;
    ptr =  str;
    ptr2 =  str2;
    while((*ptr1 || *ptr2)){
        x=upper(*ptr1);
        y=upper(*ptr2);
        if(x!=y){
            break;
        }
        ptr1++;
        ptr2++;
    }

    return x-y;
}
void main(void){
    char str1[60];
    char str2[60];
    scanf("%s",str1);
    scanf("%s",str2);
    printf("%d\n",cmpstr(str1,str2));
    printf("%d\n",cmpstr_ptr(str1,str2));
}