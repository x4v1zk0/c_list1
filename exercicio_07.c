/*
Leia  uma  temperatura  em  graus  Celsius  e  apresente-a  convertida  em  graus  Fahrenheit.  A 
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura 
em Celsius.
*/

#include <stdio.h>

int main(){
    float fahrenheit, celsius;

    printf("DIGITE A TEMPERATURA EM CELSIUS: ");
    scanf("%f", &celsius);
    fahrenheit = (9 * celsius + 160)/5;
    printf("A TEMPERATURA EM FAHRENHEIT EH: %.2f", fahrenheit);

    return 0;
}