/*
Faça um programa que leia o arquivo EGA.CPI (abra na forma binária), desloque para a posição 48 (fseek) e leia 16 símbolos e faça uma pausa (use o getch() para esperar por uma tecla para continuar). Para cada símbolo lido, avalie-o bit a bit e apresente o símbolo 219 (bloco cheio) para os valores 1 e o símbolo 32 para os valores 0.

Se tudo der certo, você verá os símbolos da tabela ASCII, iniciando no símbolo 0 e seguindo dos 256 caracteres da tabela ASCII.
  */
#include <stdio.h>

int main(void){
    char arq[] = "EGA.CPI";
    FILE *fp;
    unsigned char var;
    if(!(fp = fopen(arq,"rb"))){
        printf("Erro ao abrir o arquivo.\n");
        return -1;
    }
    fseek(fp,48,SEEK_SET);
    while(!feof(fp)){
        var = fgetc(fp);
        for (int j = 15; j >= 0; j--) {
            if((var >> j) & 1){
                printf("%c",219);
            }
            else{
                printf("%c",32); 
            }
        }
        getchar();
    }
    fclose(fp);
}
