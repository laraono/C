/*
19. Fac¸a um programa que controle o fluxo de v ˆoos nos aeroportos de um pa´ıs. Com V = 5
(v ˆoos) e A = 5 (aeroportos) e:
• Crie e leia um vetor de voos, sendo que cada voo cont ´em um c ´odigo de aeroporto
de origem e um de destino.
• Crie um vetor de aeroportos, sendo que cada aeroporto cont ´em seu c ´odigo, quanti-
dade de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto ´e identificado por um c ´odigo inteiro entre 0 e (A-1). N ˜ao aceite
aeroportos de c ´odigo inexistente.
*/

typedef struct _voo{
    int codO;
    int codD;
}voo;

typedef struct _aero{
    int codA;
    int qteS;
    int qteC;
}aero;


if(vo.codO == aerop[i].codA) aerop[i].qteS++;
if(vo.codD == aerop[i].codA) aerop[i].qteC++;
