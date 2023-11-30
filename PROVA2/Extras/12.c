#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("arq.txt","rt");
    if (fp == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    char car;
    int numl = 0, numc = 0, nump = 0, letra[96] = {0}, palavra = 0;

    while((car = fgetc(fp)) != EOF){
        numc++;
        if(palavra == 1 && !isalpha(car)){
            palavra = 0;
        }
        if(palavra == 0 && isalpha(car)) {
            letra[toupper(car)-'A']++;
            palavra = 1;
            nump++;
        }
        if(car == '\n'){
            numl++;
        }
    }

    fclose(fp);

    printf("Number of characters: %d\n", numc);
    printf("Number of lines: %d\n", numl);
    printf("Number of words: %d\n", nump);
    for(int i = 0; i < 26; i++) {
        printf("Occurrences of %c: %d\n", 'A'+i, letra[i]);
    }

    return 0;
}
