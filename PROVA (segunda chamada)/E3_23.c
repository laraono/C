

// E23) Dados um vetor com a capacidade de 33 elementos, sendo que os 32 primeiros elementos representam dígitos binários (0,1) e o 33 o terminador da string. O conteúdo deverá ser lido como uma String (gets). Apresente-os formatando-os de forma que sejam apresentados blocos de 4 dígitos e um espaço entre os 8 blocos.

#include <stdio.h>

int main(void) {
    char str[33];
    int i = 0;
    scanf("%s",str);
    while(str[i]){
        
        printf("%c",str[i]);
        if((i+1)%4 == 0) printf(" ");
        i++;
    }

}
