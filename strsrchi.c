#include<stdio.h>

char mystrsrc(char str1, const char str2[]) {
    int a=0;
    while(str2[a]) {
        if (str2[a] == str1) {
            return &str2[a]; } 
        a++;
    }
    return NULL; 
}
char mystrsrc_ptr(const char str2, const char *str1) {
    char c1,c2;
    if(*str2 >= 'A' && *str2 <= 'Z') {
        c1=*str2;
        c2=c1+32;
    }
    else if (*str2 >= 'a' && *str2 <= 'z') {
        c1=*str2;
        c2=c1-32;
    }
    else {
        c1 = *str2;
        c2 = c1;
    }
    while(*str1) {
     if (str1 == c1 || *str2 == c2 ) {
           return str1;}
        str1++;
    }
    
    return NULL;
}

int main() {
    char str2[50]="casa";
    char str1;
    str1 = getchar();
    char *res = NULL;
    /* res = mystrsrc(str1,str2);
    if(res) {
         printf("\nencontrado");
    } */
    res = mystrsrc_ptr(str1,str2);
    if(res) {
         printf("\nencontrado");
    }

}