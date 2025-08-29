#include <stdio.h>

int main() {
    /*
    Atribuição (=)
    Atribuição de soma (+=)
    Atribuição de subtração (-=)
    Atribuição de multiplicação (*=)
    Atribuição de divisão (/=)
    */

int numero1 = 10, numero2, resultado;

resultado = 10;
printf("Resultado: %d\n", resultado);

//resultado = resultado + 20;
resultado += 20; // resultado = resultado + 5
printf("Resultado de += : %d\n", resultado);

//Resultado = resultado - numero1;
resultado -= numero1;
printf("Resultado de -= : %d\n", resultado);

//Resultado = resultado * 2;
resultado *= 2;
printf("Resultado de *= : %d\n", resultado);

//Resultado = resultado / 4;
resultado /= 4;
printf("Resultado de /= : %d\n", resultado);

    return 0;   
}


  
