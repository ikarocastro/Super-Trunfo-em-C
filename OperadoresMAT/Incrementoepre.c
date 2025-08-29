#include <stdio.h>

int main() {
    /*
    incremento (++)
    pre-incremento (++a)
    pos-incremento (a++)
    decremento (--)
    pos-decremento (a--)
    pre-decremento (--a)
    */
 
    int numero1 = 1, resultado;

    printf("antes Incremento: %d\n", numero1);
    //numero1++;
    //incremento  = numero1 = numero1 + 1;
    //numero1 += 1;
    //Pos incremento: 
    //resultado = numero1;
    //numero1++;
    resultado = numero1++;
    //printf("Pos Incremento: %d\n", numero1);
    printf("Apos pos incremento - numero1: %d - resultado: %d\n", numero1, resultado);
    
    resultado = ++numero1;
    //printf("Pos Incremento: %d\n", numero1);
    printf("Apos pre incremento - numero1: %d - resultado: %d\n", numero1, resultado);

    resultado = numero1--;
    printf("Apos pos decremento - numero1: %d - resultado: %d\n", numero1, resultado);
  
      resultado = --numero1;
    printf("Apos pre decremento - numero1: %d - resultado: %d\n", numero1, resultado);
  
    return 0;
}