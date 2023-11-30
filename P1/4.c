#include <stdio.h>

int main(){
    int N = 0;
    scanf("%d",&N);
    for(int i = 2; i <= N; i++) {
        int primo = 1;
        for(int j = 2; j < i; j++) {
            if(i%j == 0) {
                primo = 0;
                break;
            }
        }
        if(primo) {
            printf("%d\n",i);
        }
    }
}