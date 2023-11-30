/* 
10) Faça um programa em C que recebe como entrada o nome de arquivo de entrada e o nome
de um arquivo de saída. O arquivo de entrada contém em cada linha o nome de uma cidade
ocupando 40 caracteres e o seu número de habitantes. A rotina deverá ler o arquivo de entrada
e gerar um arquivo de saída onde aparece o nome da cidade mais populosa seguida pelo seu
número de habitantes.
*/

#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    FILE *fp;
    struct registro {
        char cidade [41];
        int pop; 
    }reg;
    if(!(fp=fopen(argv[1],"wt"))){
         printf("Erro ao abrir o arquivo.\n");
        return -1;
    }

    do{
        printf("Cidade:\n");
        gets(reg.cidade);
        printf("População:\n");
        scanf("%d",&reg.pop);
      getchar();
        fprintf(fp,"%-40s%d\n",reg.cidade,reg.pop);
    }while(reg.pop);

    fclose(fp);   
}