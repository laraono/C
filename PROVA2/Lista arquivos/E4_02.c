#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fp;
    int num = 0;
    char str[512];

    if(argc < 2) {
        printf("Por favor, forneça o nome do arquivo como argumento.\n");
        return -1;
    }

    if(!(fp = fopen(argv[1],"rt"))){
        printf("Erro ao abrir o arquivo.\n");
        return -1;
    }

    while(fgets(str,512,fp)){ 
        num++;
    }

    printf("O arquivo possui %d linhas.\n", num);

    fclose(fp);

    return 0;
}
