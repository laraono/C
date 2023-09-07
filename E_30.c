#include <stdio.h>

int main(void) {
    char nomes[10][20];
    int ind[10];
    int aux;
    for (int i=0; i<10;i++) {
        gets(nomes[i]);
        ind[i]=i;
    }
    for (int i=0; i<9;i++) {
        for(int j=i+1;j< 10;j++){
            if(strcmp(nomes[ind[i]],nomes[ind[j]])>0){ // >0
            aux = ind[i];
            ind[i] = ind[j];
            ind[j] = aux;
            }
        }
    }
    for (int i=0; i<10;i++) {
    printf("%d\n",ind[i]);
    }
    return 0;
}
