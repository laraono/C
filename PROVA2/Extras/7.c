/*
23. Escreva um programa que receba dois structs do tipo dma, cada um representando uma
data v ´alida, e calcule o n ´umero de dias que decorreram entre as duas datas.

*/

struct dma {
int dia;
int mes;
int ano;
};

int dias(struct dma d1,struct dma d2){
    int dias1, dias2;
    dias1 = (d1.ano * 365) + (d1.mes * 30) + d1.dia;
    dias2 = (d2.ano * 365) + (d2.mes * 30) + d2.dia;
  return dias1-dias2;

}