// strcat(str1, str2) concatena o conteúdo da 2ª no final da 1ª string

#include <stdio.h>


char catstr(char str1[], const char str2[]) {
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
    str1[a+1] = "\0";
    return str1;
}

char catstr_ptr(char *vet1, const char *vet2) {
   char *ptr1 = NULL;
    char *ptr2= NULL;
    ptr =  vet1;
    ptr2 =  vet2;
    
    while(*ptr1){
        ptr1++;
    }
    
    while(*ptr2){
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1='\0';
    
}

void main(void){
    char str1[60];
    char str2[60];
    scanf("%s",str1);
    scanf("%s",str2);
     catstr_ptr(str1,str2);
    printf("%s\n",str1);
    catstr(str1,str2);
    printf("%s\n",str1);
}