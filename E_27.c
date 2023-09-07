#include <stdio.h>
#include <string.h>
int main(void) {
    char str[60];
    char suf[60][60]={0};
    int ind[60]={0};
    char aux;
    int i=0,len;
    scanf("%s",str); 
    len = strlen(str);
    
    while(str[i]){
        for (int j=0; j < len; j++) {
                suf[i][j]=str[i+j];
            }
            ind[i]=i;
            i++;
    }

     for (int k=0; k<len-1;k++) {
        for(int j=k+1;j<len;j++){
            if(strcmp(suf[ind[k]], suf[ind[j]])>0){ 
            aux = ind[k];
            ind[k] = ind[j];
            ind[j] = aux;
            }
        }
    }
    
     for(i=0;i<len;i++){
        printf("%s\n",suf[ind[i]]);
    }
    return 0;
}
