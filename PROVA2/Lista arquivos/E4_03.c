// 03) Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo

#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *f1, *f2, *f3;
    char buffer[512];

    if(argc < 4) {
        printf("Por favor, forneça o nome dos arquivos como argumento.\n");
        return -1;
    }

    if(!(f1 = fopen(argv[1],"rt"))){
        printf("Erro ao abrir o arquivo.\n");
        fclose(f1);
        return -1;
    }
    if(!(f2 = fopen(argv[2],"rt"))){
        printf("Erro ao abrir o arquivo.\n");
        fclose(f1);
        fclose(f2);
        return -1;
    }
    if(!(f3 = fopen(argv[3],"wt"))){
        printf("Erro ao abrir o arquivo.\n");
        fclose(f1);
        fclose(f2);
        fclose(f3);
        return -1;
    }
    while(fgets(buffer,512,f1)){
        fputs(buffer,f3);
    }
    while(fgets(buffer,512,f2)){
         fputs(buffer,f3);
    }
    fclose(f1);
        fclose(f2);
        fclose(f3);

    return 0;
}
