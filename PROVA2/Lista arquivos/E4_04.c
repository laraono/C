/* 04) Desenvolver um programa em C que lê o conteúdo de um arquivo e cria um arquivo com o
mesmo conteúdo, mas com todas as letras minúsculas convertidas para maiúsculas.
Os nomes dos arquivos serão fornecidos, via teclado, pelo usuário na linha de comando.
*/
#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *f1,*f2;
    char buffer[512];

    if(argc < 3) {
        printf("Por favor, forneça o nome dos arquivos como argumento.\n");
        return -1;
    }

    if(!(f1 = fopen(argv[1],"rt"))){
        printf("Erro ao abrir o arquivo.\n");
        fclose(f1);
        return -1;
    }
    if(!(f2 = fopen(argv[2],"wt"))){
        printf("Erro ao abrir o arquivo.\n");
        fclose(f1);
        fclose(f2);
        return -1;
    }
    while(fgets(buffer,512,f1)){
        for(int i=0; i<512 && buffer[i]; i++){
            if(buffer[i] >= 'a' && buffer[i] <= 'z'){
                buffer[i] -= 32;
            }
              fputc(buffer[i],f2);
        }

    }

    fclose(f1);
        fclose(f2);


    return 0;
}
