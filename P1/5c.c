#include <stdio.h>

int main(){
    int m = 0;
    int n = 0;
    scanf("%d",&m);
    scanf("%d",&n);
    int vet[m][n];
   
    for(int i = 0; i < m; i++) {
         for(int j = 0; j < n; j++){
         scanf("%d",&vet[i][j]);
         }
    }
        // soma linha
     for(int i = 0; i < m; i++) {
        int soma = 0;
         for(int j = 0; j < n; j++){
            soma += vet[i][j];
         }
         printf("%d\n",soma);
    }
}