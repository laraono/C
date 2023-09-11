// palindroma
#include <stdio.h>

int pal(const num1){
    char str1[32];
    char str2[32];
    int i;
    sprintf(str1,"%d",num1);
    sprintf(str2,"%d",num1);
    for(i=0;str1[i];i++);
    i--;
    
    for(int j=i;j>=0;j--){
        if(str1[i-j] != str2[j]){
            return 0;
        }
    }
    return 1;
}
int main(void){
    int n1 = 484;

    printf("%d\n",pal(n1));
  
}