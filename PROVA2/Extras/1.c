/*
1. Escreva um trecho de c ´odigo para fazer a criac¸ ˜ao dos novos tipos de dados conforme
solicitado abaixo:
• Hor ´ario: composto de hora, minutos e segundos.
• Data: composto de dia, m ˆes e ano.
• Compromisso: composto de uma data, hor ´ario e texto que descreve o compromisso.
*/

struct horario {
    int tm_hour;
     char pontohora[1]; // :
    int tm_min;
    char pontomin[1]; // :
    int tm_sec;
};
struct data{
    int dia;
    char barradia[1]; //  /
    int mes;
     char barrames[1]; // /
    int ano;
};
struct compromisso{
    struct data date;
    struct horario hour;
    char desc[50];
}