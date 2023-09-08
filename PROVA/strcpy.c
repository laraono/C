// strcpy(str1, str2) copia o conteúdo da 2ª para a 1ª string

#include <stdio.h>


char cpystr(char str1[], const char str2[]) {
    int a=0;
    while(str2[a]) {
         str1[a]=str2[a];
        a++;
    }
    str1[a+1] = "\0";
    return str1;
}

char cpystr_ptr(char *vet1, const char *vet2) {
    char *ptr1=vet1;
    char *ptr2=vet2;
    
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
    scanf("%s",str2);
     cpystr_ptr(str1,str2);
    printf("%s\n",str1);
    cpystr(str1,str2);
    printf("%s\n",str1);
}