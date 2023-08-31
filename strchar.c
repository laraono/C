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
char mystrsrc_ptr(const char str1, const char *str2) { 
    while(*str2) {
     if (str1 == *str2) {
           return str2;}
        str2++;
    }
    
    return NULL;
}

int main() {
    char str2[50]="casa";
    char str1;
    str1 = getchar();
    char *res = NULL;
    res = mystrsrc(str1,str2);
    if(res) {
         printf("\nencontrado");
    }
    res = mystrsrc_ptr(str1,str2);
    if(res) {
         printf("\nencontrado");
    }

}