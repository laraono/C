#include <stdio.h>
#define BUFFER_TAM 512

int main(){
    FILE *fp;

    char arq[] = "pt_BR.dic";
    int letras[52] = {0}, palavras[52] = {0};
    char buffer[BUFFER_TAM];
    if(!(fp = fopen(arq,"rt"))){
        printf("Erro ao abrir arquivo");
        return -1;
    }
    while(fgets(buffer,BUFFER_TAM,fp)){
        int i = 0;
        int found[52] = {0};
        while(buffer[i]){
            if(buffer[i] == '/') break;
            if((buffer[i] >= 'A' && buffer[i] <= 'Z')){
                letras[buffer[i]-'A']++;
                if(!found[buffer[i]-'A']){
                    palavras[buffer[i]-'A']++;
                    found[buffer[i]-'A'] = 1;
                }
            }
            else if(buffer[i] >= 'a' && buffer[i]<='z'){
                letras[buffer[i]-'a'+26]++;
                if(!found[buffer[i]-'a'+26]){
                    palavras[buffer[i]-'a'+26]++;
                    found[buffer[i]-'a'+26] = 1;
                }
            }
            i++;
        }
    }
    printf("LETRAS|FREQUÊNCIA|NUMERO DE LINHAS\n");
    for(int i = 0; i < 52; i++){
        printf("%-6c|%-10d|%-16d\n",i<26?i+'A':i-26+'a',letras[i],palavras[i]);
    }

    fclose(fp);
    return 0;
}
