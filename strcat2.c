#include<stdio.h>

int mystrcat(char str1[], const char str2[]) {
    int a=0;
    int b=0;
    while(str1[a]) {
        a++;
    }
    
    while(str2[b]) {
        str1[a]=str2[b];
        b++;
        a++;
    }
    str1[a] = "\0";
    return str1;
}

int mystrcat_ptr(char *str1, const char *str2) { // const para não modificar parâmetro
    char *ptr1 = (char *)str1; // cast evita warning do 'const'
    char *ptr2 = (char *)str2;
    while(*ptr1) {
        ptr1++;
    }
     while(*ptr2) {
        *ptr1 = *ptr2;
        ptr2++;
        ptr1++;
    }
    *ptr1="\0";
}

int main() {
    char str1[50]="asa", str2[50]="casa";
    
    printf("str1 (%s) + str2 (%s) =", str1, str2);
    mystrcat(str1,str2);
    printf("%s\n",str1);
     printf("str1 (%s) + str2 (%s) =", str1, str2);
    mystrcat_ptr(str1,str2);
    printf("%s\n",str1);
}