/*
4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usu ´ario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior m ´edia geral.
(d) Encontre o aluno com menor m ´edia geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovacao
*/

typedef struct _aluno{
    char matricula[10];
    char nome[50];
    int p1;
    int p2;
    int p3;
}aluno;

int main(){
    aluno alunos[5];
    int maior = -10000, med=-10000, maiormed=-10000, menormed = -10000;
    for(int i = 0; i < 5; i++){
        printf("Nome:\n");
        gets(alunos[i].nome);
        printf("Matricula:\n");
        gets(alunos[i].matricula);
        printf("p1:\n");
        scanf("%d",&alunos[i].p1);
        printf("p2:\n");
        scanf("%d",&alunos[i].p2);
        printf("p3:\n");
        scanf("%d",&alunos[i].p3);
        med = (alunos[i].p1 + alunos[i].p2 +alunos[i].p3)/3;
        if(alunos[i].p1 > maior) maior = alunos[i].p1;
         if(alunos[i].p1 > maiormed) maiormed = med;
         if(alunos[i].p1 < menormed) menormed = med;
    }
}