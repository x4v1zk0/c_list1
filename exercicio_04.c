/*
Leia  um  número  inteiro  N  e  um  percentual  qualquer  e  escreva  qual  o  valor  do  percentual 
aplicado ao número.
*/

#include <stdio.h>
int main(){
    int n;
    float percentual, porcentagem;
    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &n);
    printf("DIGITE O PERCENTUAL: ");
    scanf("%f", &percentual);
    porcentagem = (n * percentual) / 100;
    printf("O PERCENTUAL DE %d APLICANDO %.2f PORCENTO EH: %2.f", n, percentual, porcentagem);

    return 0;
}