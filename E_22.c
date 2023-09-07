#include <stdio.h>

void func(char vet[], int num) {
    int n=num;
    int i=31;
    
    while(i >= 0){
        vet[i] = (n&1)+'0';
        n >>= 1;
        i--;
        
    }
    
    vet[32]='\0';
}

int main(void) {
int num;
char str[33];
scanf("%d",&num);
func(str,num);
printf("%s\n",str);
}