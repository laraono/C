// mygets
#include <stdio.h>

char mygets_ptr(char *str, int tamanho){
    
    for(int i=0; i<tamanho; i++){
        *(str+i)=getchar();
        if(*(str+i)=='\n' || !*(str+i)) break;
    }
    fflush(stdin);
}
 char mygets(char str[], int tamanho)
{
    for(int i=0;i<tamanho;i++){
        str[i]=getchar();
        if(str[i]=='\n' || !str[i]) break;
    }
    fflush(stdin);
} 

int main() {
    char getting[60]={0};
    mygets(getting, 60);
    printf("%s", getting);
    mygets_ptr(getting, 60);
    printf("%s", getting);
}