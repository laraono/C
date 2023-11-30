/* 
10) Faça um programa em C que recebe como entrada o nome de arquivo de entrada e o nome
de um arquivo de saída. O arquivo de entrada contém em cada linha o nome de uma cidade
ocupando 40 caracteres e o seu número de habitantes. A rotina deverá ler o arquivo de entrada
e gerar um arquivo de saída onde aparece o nome da cidade mais populosa seguida pelo seu
número de habitantes.
*/

#include <stdio.h>
#include <string.h>
struct registro {
    char cidade [41];
    int pop; 
};
int main(int argc, char *argv[]){
    FILE *fp, *fp2;
  char cidade[41]={};
  // int maior = -100000;
  struct registro reg, reg_maior;
    if(!(fp=fopen(argv[1],"rt"))){
         printf("Erro ao abrir o arquivo.\n");
        return -1;
    }
        if(!(fp2=fopen(argv[2],"wt"))){
         printf("Erro ao abrir o arquivo.\n");
             fclose(fp);
        return -1;
    }

    while(fscanf(fp,"%40s%d\n",reg.cidade,&reg.pop)!=EOF){
        if(reg.pop > reg_maior.pop){
            reg_maior.pop = reg.pop;
           reg_maior = reg;
    }
    }
    fprintf(fp2,"%-40s%d\n",reg_maior.cidade, reg_maior.pop);
    fclose(fp);
    fclose(fp2);   
}