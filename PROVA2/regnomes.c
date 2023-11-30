/* Faça um programa que leia 10 registros (nome e idade),
ordene-os em ordem alfabética por nome e apresente-os.
Observe que na hora da permuta, vocês poderão usar a
variável aux e tabela sem ter que permutar os campos
individualmente, exemplo:
aux = tabela[3];
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[81];
    int idade;
} REG;

int main(void){

    REG tabela[10], aux;
    for(int i=0; i<10;i++){
       
        gets(tabela[i].nome);
        
        scanf("%d\n",&tabela[i].idade);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i -1; j++) {
            if (strcmp(tabela[j].nome, tabela[j + 1].nome)>0) {
                aux = tabela[j];
                tabela[j] = tabela[j + 1];
                tabela[j + 1] = aux;
            }
        }
    }
    for(int i=0; i<10;i++){
        printf("Nome: %s Idade: %d\n",tabela[i].nome, tabela[i].idade);
    }

}