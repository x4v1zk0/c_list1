/*
Leia  dois  valores  inteiros  nas  variáveis  Val1  e  Val2,  troque  os  seus  conteúdos  e  escreva  o 
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois 
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10.
*/

#include <stdio.h>
int main(){
    int x, y, z;
    printf("DIGITE O VALOR DA VARIAVEL 1: ");
    scanf("%d", &x);
    printf("DIGITE O VALOR DA VARIAVEL 2: ");
    scanf("%d", &y);
    z = x; x = y; y = z;
    printf("O VALOR DA VARIAVEL 1 EH %d E DA VARIAVEL 2 EH %d", x, y);
}