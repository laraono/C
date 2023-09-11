#include <stdio.h>

int main() {
    char s1[30];
    char s2[30];
    int f1[26] = {0};
    int f2[26] = {0};
    int anag = 1;
    gets(s1);
    gets(s2);
    
    for(int i=0; s1[i]; i++) if(isalpha(s1[i])) f1[tolower(s1[i])-'a']++;
    for(int i=0; s2[i]; i++) if(isalpha(s2[i])) f2[tolower(s2[i])-'a']++;
    
    for(int i=0; i < 26; i++) {
        if(f1[i] != f2[i]){
            anag = 0;
            break;
        }
    }
    
    if(anag) printf("Formam anagramas");
    else printf("Nao formam anagramas");
    return 0;
}
