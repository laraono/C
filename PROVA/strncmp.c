// strcmp(str1,str2) compara as strings
#include <stdio.h>
#include <string.h>
int cmpstr(const char str1[], const char str2[],int num) {
    int a=0;
    while(str1[a] && str2[a] && a < num) {
        if(str1[a]!=str2[a]){
            break;
        }
        a++;
    }
    return str1[a] - str2[a];
}

int cmpstr_ptr(const char *str, const char *str2, const int num){
    char *ptr1, *ptr2= NULL;
    int n = num;
    ptr1 = str;
    ptr2 = str2;

    while((*ptr1 || *ptr2) && (*ptr1 == *ptr2) && n > 0){
        ptr1++;
        ptr2++;
        n--;
    }
    
    return *ptr1 - *ptr2;
}
void main(void){
    char str1[60];
    char str2[60];
    scanf("%s",str1);
    scanf("%s",str2);
    printf("%d\n",cmpstr(str1,str2, 5));
    printf("%d\n",cmpstr_ptr(str1,str2, 5));
    printf("%d\n",strncmp(str1,str2, 5));
    return 0;
}