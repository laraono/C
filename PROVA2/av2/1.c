#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    float *ptr, *temp, maior = FLT_MIN;
    printf("Informe o n. de elementos: ");
    scanf("%d",&num);
    ptr = (float *)calloc(num,sizeof(float));
    temp = ptr;
    for(int i = 0; i < num; i++){
        scanf("%f",temp);
        temp++;
    }
     temp = ptr;
     for(int i = 0; i < num; i++){
        if(*temp > maior) maior = *temp;
        temp++;
    }
    free(ptr);
    return 0;
}
