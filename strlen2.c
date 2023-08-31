#include<stdio.h>

int mystrlen(const char str[]) {
    int a=0;
    while(str[a]) {
        a++;
    }
    return a;
}

int mystrlen_ptr(const char *str) { // const para não modificar parâmetro
    char *ptr =(char *)str; // cast evita warning do 'const'
    while(*ptr) {
        ptr++;
    }
    return ptr-str;
}

int main() {
    printf("Tamanho da string 'oi mundo': %d\n", mystrlen("oi mundo"));
    printf("Tamanho da string com ponteiro'oi mundo': %d\n", mystrlen_ptr("oi mundo"));
}