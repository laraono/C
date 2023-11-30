#include <stdio.h>
#include <stdlib.h>

typedef struct _pessoa{
    char nome[30];
    char nasc[11];
    char CPF[12];
}pessoa;

void fill(pessoa *p){
    printf("Nome:");
    gets(p->nome);
    printf("Nascimento:");
    gets(p->nasc);
    printf("CPF:");
    gets(p->CPF);
}

void print(pessoa *p){
    printf("Nome: %s Data nascimento: %s CPF: %s", p->nome, p->nasc, p->CPF);
}

int main(){
    pessoa *ptr = (pessoa*) malloc(sizeof(pessoa));
    if(ptr == NULL) {
        printf("Memory allocation failed.\n");
        return -1;
    }
    fill(ptr);
    print(ptr);
    free(ptr);
    return 0;
}
