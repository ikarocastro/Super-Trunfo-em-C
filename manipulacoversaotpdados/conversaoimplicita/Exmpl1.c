#include <stdio.h>
 
int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
 
    //forçou 'a' a se torna de inteiro para ponto flutuante float

    printf("Resultado: %.2f\n", resultado);
    
    return 0;

   //nessa conversao podem acarretar a perda de dados caso a conversao seja de por exemplo um float converter para int, perdendo assim a sua casa decimal.

}
