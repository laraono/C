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
      // diagonal secundária
      for (int i = 0; i < m && i < n; i++) {
        printf("%d\n", vet[i][n - 1 - i]);
    }

}