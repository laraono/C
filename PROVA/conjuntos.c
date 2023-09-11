#include <stdio.h>

int pesquisa(int c1, int c2[]){
        for(int j = 0; c2[j]!= '\0'; j++)
            if(c2[j] == c1) return 1;
    return 0;
}

void uniao(int c1[], int c2[], int u[]) {
    int i = 0;
    for(; c1[i]!= '\0'; i++) u[i] = c1[i];
    for(int j = 0;c2[j]!= '\0'; j++) 
        if(pesquisa(c2[j], u) == 0) {
            u[i] = c2[j];
            i++;
        }
    u[i] = '\0';
}

void intersec(int c1[], int c2[], int i[]) {
    int k = 0;
    for(int j = 0;c2[j]!= '\0'; j++) 
        if(pesquisa(c2[j], c1)) {
            i[k] = c2[j];
            k++;
        }
     i[k] = '\0';
}

void dif(int c1[], int c2[], int d[]) {
    int k = 0;
 for(int j = 0;c1[j]!= '\0'; j++) 
    if(!pesquisa(c1[j],c2)) 
    {
        d[k] = c1[j];
        k++;
    }
    d[k] = '\0';
}

int main(void){
    int c1[] = {1, 2, 3, 4, 5, '\0'};
    int c2[] = {4, 5, 6, 7, 8, '\0'};

    int inter[100];
    int un[100];
    int difer[100];
    intersec(c1,c2,inter);
    
     for(int i = 0; inter[i] != '\0'; i++) printf("%d\n",inter[i]);

     uniao(c1,c2,un);
     for(int i = 0; un[i] != '\0'; i++) printf(">%d\n",un[i]);
     dif(c1,c2,difer);
     for(int i = 0; difer[i] != '\0'; i++) printf("%d\n",difer[i]);
}