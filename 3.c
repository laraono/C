#include <stdio.h>

int main() {
    int coluna=1, linha=1;
    for (int n=1;n<=15;n++){
        if(coluna!=linha){
            printf("%d ",n);
            coluna++;
        }
        else {
            printf("%d\n",n);
            linha++;
            coluna=1;
        }
       }
    }


