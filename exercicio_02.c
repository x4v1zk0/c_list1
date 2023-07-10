// Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das informações número de anos que ele fuma, nº de cigarros fumados por dia e preço de uma carteira.
#include <stdio.h>
int main(){
    int anosFumando, cigarrosPorDia;
    float valorCarteiraCigarro, valorTotal;
    
    printf("VOCE FUMA A QUANTOS ANOS: ");
    scanf("%d", &anosFumando);
    printf("VOCE FUMA QUANTOS CIGARROS POR DIA: ");
    scanf("%d", &cigarrosPorDia);
    printf("QUANTO CUSTA UMA CARTEIRA DE CIGARRO: ");
    scanf("%f", &valorCarteiraCigarro);
    valorTotal = ((anosFumando * 365 * cigarrosPorDia) / 20) * valorCarteiraCigarro;
    printf("VOCE JA GASTOU R$%.2f, PARE DE FUMAR!",valorTotal);
}
