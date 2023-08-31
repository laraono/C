#include<stdio.h>

int mystrcomp(char str1[], const char str2[]) {
    int a=0;
    while(str1[a] && str2[a] && str1[a] == str2[a]) {
        if (str1[a] == '\0' || str2[a] == '\0') {
            return str1[a] - str2[a]; } 
        a++;
    }
    return str1[a] - str2[a]; 
}
int mystrcomp_ptr(const char *str1, const char *str2) { 
    char *ptr1 = (const unsigned char *)str1; // unsigned para caracteres especiais/graficos, principalmente no linux 
    char *ptr2 = (const unsigned char *)str2;
    while(*ptr1 > *ptr2 && *ptr1 == *ptr2 ) {
     if (*ptr1 == '\0' || *ptr2 == '\0') {
           return *ptr1 - *ptr2;}
        ptr1++;
        ptr2++;
    }
    
    return *ptr1 - *ptr2;
}

int main() {
    char str1[50]="asa", str2[50]="casa";
    
    printf("str1 (%s) + str2 (%s) =", str1, str2);
    printf("%d\n", mystrcomp(str1,str2));
     printf("str1 (%s) + str2 (%s) =", str1, str2);
    printf("%d\n", mystrcomp_ptr(str1,str2));
}