#include <stdio.h>

int main(void){
    char str1[60]={0};
    char str2[60]={0};
    scanf("%s",str1);
    scanf("%s",str2);
   for(int i=0; str1[i] && str2[i]; i++){
        if(str1[i] > str2[i]) {
            printf("%d",1); 
            break;
        }
        else if(str1[i] < str2[i]){
            printf("%d",-1);  
            break;
        } 
        else {
            printf("%d",0);
            break;
        }
   }
    return 0;
}