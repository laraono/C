/*
2. Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura.
*/
#include <stdio.h>
struct {
    char nome[50];
    int idade;
    char end[50];
} reg;

int main(char *argv[]){
    FILE *fp;
    gets(reg.nome);
    scanf("%d",&reg.idade);
    gets(reg.end);
    fp  = fopen(argv[1],"wt");
    fprintf(fp,"%s %d %s\n",reg.nome,reg.idade,reg.end);
}