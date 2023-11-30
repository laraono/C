#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _data{
    int dia;
    int mes;
}data;

typedef struct _contato{
    char nome[20];
    char tel[10];
    data aniversario;
}contato;

void inserir(FILE *f){
    contato ctt;
    printf("Nome: ");
    fgets(ctt.nome, 20, stdin);
    printf("Telefone: ");
    fgets(ctt.tel, 10, stdin);
    printf("Aniversario (dd/mm): ");
    fscanf(f, "%d/%d", &ctt.aniversario.dia, &ctt.aniversario.mes);
    fwrite((void *)&ctt, sizeof(contato), 1, f);
}

int pesquisar(FILE *f, char *ctt){
    contato pessoa;
    rewind(f);
    while(fread((void *)&pessoa, sizeof(contato), 1, f)){
        if(strcmp(pessoa.nome,ctt) == 0){
            return ftell(f);
        }
    }
    printf("Nao encontrado\n");
    return -1;
}

void remover(FILE *f, char *ctt){
    int pos = pesquisar(f,ctt);
    if(pos != -1){
        fseek(f, pos, SEEK_SET);
        contato vazio = {"", "", {0, 0}};
        fwrite(&vazio, sizeof(contato), 1, f);
    }
}

void listar(FILE *f){
    contato pessoa;
    rewind(f);
    while(fread((void *)&pessoa, sizeof(contato), 1, f)){
        printf("Nome: %s, Tel: %s, Aniversario: %d/%d\n", pessoa.nome, pessoa.tel, pessoa.aniversario.dia, pessoa.aniversario.mes);
    }
}

void listarInicial(FILE *f, char inicial){
    contato pessoa;
    rewind(f);
    while(fread((void *)&pessoa, sizeof(contato), 1, f)){
        if(pessoa.nome[0] == inicial){
            printf("Nome: %s, Tel: %s, Aniversario: %d/%d\n", pessoa.nome, pessoa.tel, pessoa.aniversario.dia, pessoa.aniversario.mes);
        }
    }
}

void niverMes(FILE *f,int mes){
    contato pessoa;
    rewind(f);
    while(fread((void *)&pessoa, sizeof(contato), 1, f)){
        if(pessoa.aniversario.mes == mes){
            printf("Nome: %s, Tel: %s, Aniversario: %d/%d\n", pessoa.nome, pessoa.tel, pessoa.aniversario.dia, pessoa.aniversario.mes);
        }
    }
}

void start(char *arq, FILE **f){
    if((*f = fopen(arq,"a+b")) == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(-1);
    }
}

int main(){
    FILE *f;
    start("contatos.bin", &f);
    // ...
    fclose(f);
    return 0;
}
