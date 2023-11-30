/*
16. Fac¸a um programa que seja uma agenda de compromissos e:
• Crie e leia um vetor de 5 estruturas de dados com: compromisso (m ´aximo 60 letras)
e data. A data deve ser outra estrutura de dados contendo dia, m ˆes e ano.
• Leia dois inteiros M e A e mostre todos os compromissos do m ˆes M do ano A.
Repita o procedimento at ´e ler M = 0
*/

typedef struct _compromisso{
    char nome[60];
    data date;
}compromisso;

typedef struct _data {
int dia;
int mes;
int ano;
} data;

int main(){
    compromisso comp[5];
    int M,A;
    for(int i = 0; i<5;i++){
    if(comp[i].date.mes = M && comp[i].date.ano == A){
        printf("%s",comp[i].nome);
    }
    }
}
