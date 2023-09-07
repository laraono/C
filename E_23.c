
#include<stdio.h>

int main() {
   char vet[33];
    int len;
   gets(vet);

   while(vet[len]){
       len++;
   }
   
   for (int i=1; i<=len; i++){
        printf("%c", vet[i-1]);
       if(i % 4 == 0 && i < len-1) {
           printf(" ");
       }

   }
}