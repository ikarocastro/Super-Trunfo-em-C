#include <stdio.h>

int main() {

int idade = 20; 
float altura = 1.75;
int dia = 15;


printf("qual sua idade?:");
scanf("%d", &idade);
printf("qual sua altura?:");
scanf("%f", &altura);
printf("qual o dia do seu aniversario?:");
scanf("%d", &dia);

printf("\n===Carta 1 ===\n");

printf("minha idade e %d\n", idade);
printf("minha altura e %.2f\n", altura);
printf("meu aniversario e dia %d\n", dia);

}
