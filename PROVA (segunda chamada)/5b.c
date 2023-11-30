#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main() {
    int N,maior=INT_MIN,m2;
    scanf("%d",&N);
    int n[N];
    for(int i=0; i<N;i++){
        scanf("%d",&n[i]);
        if(n[i] > maior) maior = n[i];
    }
    printf("%d\n",maior);
     for(int i=0;i<N;i++){
        m2 = INT_MIN;
        for(int j=0;j<N;j++){
            if(n[j]>m2 && n[j] < maior)
                m2 = n[j];
        }
        if(m2 > INT_MIN){
        printf("%d\n",m2);
        maior = m2;
        }
    }

}
