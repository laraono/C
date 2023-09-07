#include <stdio.h>

int main(void) {
    char str[60];
    int i=0;
    scanf("%s",&str); 

    while (str[i]) {
        for (int j=0; j <= i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
        i++;
    }

    return 0;
}
