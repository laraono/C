#include <stdio.h>

int main(void) {
    char str[60];
    int i,len;
    scanf("%s",&str); 
    
    while(str[len])
    {
        len++;
    }
    
    while(str[i]){
    for (int j=i; j < len; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
        
        i++;
    }
    return 0;
}
