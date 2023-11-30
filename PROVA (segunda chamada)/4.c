#include <stdio.h>
#include <limits.h>
int main() {
    int N,n,maior=INT_MIN;
    scanf("%d",&N);
    for(int i=0; i<N;i++){
        scanf("%d",&n);
        if(n>maior && ((n&1)==0)){
            maior = n;
        }
    }
    printf("%d",maior);
}
