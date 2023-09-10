/*
Faça um programa em C que leia nessa ordem:
a) um valor inteiro e apresente-o (scanf com %d).
b) uma tecla e apresente o código ASCII, um espaço e o símbolo correspondente (use as funções para ler teclas - getch/getchar)
c) um ponto flutuante (scanf %f) e apresente com %.2f - veja o ponto antes do 2f)
d) leia um texto (char texto[100]) usando a função gets(texto) e apresente-o com printf usando o %s.
*/
#include <stdio.h>

int main(void){
    int n = 0;
    char c;
    float f = 0.0;
    char texto[100]={0};
    scanf("%d\n",&n);
    printf("%d\n",n);
    c = getchar();
    printf("%d %c\n",c, c);
    scanf("%f\n",&f);
    printf("%.2f\n",f);
    gets(texto);
    printf("%s\n",texto);
    return 0;
}