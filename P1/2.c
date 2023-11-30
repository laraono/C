#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i = a; i <= b; i++) {
        if((i&1)==0){
            printf("%d\n",i);
        }
    }
}