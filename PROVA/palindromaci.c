// palindroma
#include <stdio.h>
char upper(const char str){
    char aux=str;
        if(aux >= 'a' && aux <= 'z'){
            aux-= 32;
        }
     return aux;
}

int pal(const char vet[], const char vet2[]){
    int i;
    for(i=0;vet[i];i++);
    i--;
    for(int j=i;j>=0;j--){
        if(vet[i-j] != vet2[j]){
            return 0;
        }
    }
    return 1;
}

int pal_ptr(const char *vet,const char *vet2){
    char *ptr = NULL;
    char *ptr2 = NULL;
    ptr = vet;
    ptr = vet2;
    for(;*ptr;ptr++);
    ptr--;
    for(;*ptr2;ptr2++,ptr--){
        if(*ptr2 != *ptr){
            return 0;
        }
    }
    return 1;
}

void main(void){
    char str1[60];
    char str2[60];
    gets(str1);
    gets(str2);
    printf("%d\n",pal(str1,str2));
    printf("%d\n",pal_ptr(str1,str2));
}