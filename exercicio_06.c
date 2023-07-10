/*
custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem 
do  distribuidor  seja  de  28%  e  os  impostos  de  45%,  escreva  um  algoritmo  que  leia  o  custo  de 
fábrica de um carro e escreva o custo ao consumidor.
*/

#include <stdio.h>

int main(){
    float custoFabrica,custoTotalCarro, lucroDestribuidor, impostos;

    printf("DIGITE O CUSTO DE FABRICA DE UM CARRO: ");
    scanf("%f", &custoFabrica); 
    impostos = (custoFabrica * 45)/100;
    lucroDestribuidor = (custoFabrica * 28)/100;
    custoTotalCarro = custoFabrica + lucroDestribuidor + impostos;
    printf("O CUSTO TOTAL DO CARRO EH: %2.f", custoTotalCarro);

    return 0;
}