#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
    //Esse float na frente de 'a' é a conversão explicita, forçando o 'a' a se tornar um float
 
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}