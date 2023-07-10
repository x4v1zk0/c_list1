/*
Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de 
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos 
a vista ou parcelado em até 10 vezes sem juros.
*/

#include <stdio.h>

int main(){
    
    float valorProduto, valorParcelas;
    int parcelas;
    
    printf("DIGITE O VALOR DO PRODUTO: ");
    scanf("%f", &valorProduto);
    do{
        printf("DESEJA DIVIDIR EM QUANTAS VEZES: ");
        scanf("%d", &parcelas);
        valorParcelas = valorProduto / parcelas;
    }while(parcelas < 1 && parcelas > 10);
    printf("VALOR DO PRODUTO R$%.2f E SAO %d PARCELAS DE R$%.2f", valorProduto, parcelas, valorParcelas);
    return 0;
}