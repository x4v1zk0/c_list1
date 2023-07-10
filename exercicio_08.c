/*
Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o 
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter. 
*/

#include <stdio.h>
int main(){
    float dolares, cotacao, reais;
    printf("QUANTOS DOLARES DESEJA CONVERTER: ");
    scanf("%f", &dolares);
    printf("QUAL A COTACAO DO DOLAR: ");
    scanf("%f", &cotacao);
    reais = dolares * cotacao;
    printf("VOCE CONVERTEU U$%.2f, EM REAIS SAO R$%2.f", dolares, reais);

    return 0;
}