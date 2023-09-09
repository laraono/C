// strcmp(str1,str2) compara as strings
#include <stdio.h>

char cmpstr(const char str1[], const char str2[]) {
    int a=0;
    while(str1[a] && str2[a]) {
        if(str1[a]!=str2[a]){
            break;
        }
        a++;
    }
    return str1[a] - str2[a];
}

char cmpstr_ptr(const char *str, const char *str2){
   char *ptr1 = NULL;
    char *ptr2= NULL;
    ptr =  str;
    ptr2 =  str2;
    while((*ptr1 || *ptr2) && (*ptr1 == *ptr2)){
        ptr1++;
        ptr2++;
    }

    return *ptr1 - *ptr2;
}
void main(void){
    char str1[60];
    char str2[60];
    scanf("%s",str1);
    scanf("%s",str2);
    printf("%d\n",cmpstr(str1,str2));
    printf("%d\n",cmpstr_ptr(str1,str2));
}