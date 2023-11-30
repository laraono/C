/*
18. Fac¸a um programa que gerencie o estoque de um mercado e:
• Crie e leia um vetor de 5 produtos, com os dados: c ´odigo (inteiro), nome (m ´aximo
15 letras), prec¸o e quantidade.
• Leia um pedido, composto por um c ´odigo de produto e a quantidade. Localize
este c ´odigo no vetor e, se houver quantidade suficiente para atender ao pedido
integralmente, atualize o estoque e informe o usu ´ario. Repita este processo at ´e ler
um c ´odigo igual a zero.
Se por algum motivo n ˜ao for poss´ıvel atender ao pedido, mostre uma mensagem infor-
mando qual erro ocorreu
*/
while(cod){
for(int i=;i<;i++){
if(cod == prod[i].cod){
    found = 1;
    if(qte == prod[i].qte){
        prod[i].qte -= qte;
    }
    else{
        printf("Sem qte suficiente");
    }
}
}
if(!found){
     printf("Não achado");
}
}