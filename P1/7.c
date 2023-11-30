#include <stdio.h>
#include <string.h>
#include <limits.h>
int main(){
    char txt[10][100] = {};
    int ind[10]={};
    int maior=INT_MIN;
    for(int i=0; i<10;i++){
         gets(txt[i]);
         ind[i] = i;
    }

        for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i -1; j++) {
            if (strcmp(txt[ind[j]],txt[ind[j + 1]])>0) {
                maior = ind[j];
                ind[j] = ind[j + 1];
                ind[j + 1] = maior;
            }
        }
    }
   
    for(int i=0; i<10;i++){
        printf("%s\n",txt[ind[i]]);
    }

}