#include <stdio.h>

int main() {
    int N,maior;
    scanf("%d",&N);
    int n[N],ind[N];
    for(int i=0; i<N;i++){
        scanf("%d",&n[i]);
        ind[i]=i;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i -1; j++) {
            if (n[ind[j]] > n[ind[j + 1]]) {
                maior = ind[j];
                ind[j] = ind[j + 1];
                ind[j + 1] = maior;
            }
        }
    }
       for(int i=N-1; i >= 0; i--) {
       printf("%d\n",n[ind[i]]);
    }
}
