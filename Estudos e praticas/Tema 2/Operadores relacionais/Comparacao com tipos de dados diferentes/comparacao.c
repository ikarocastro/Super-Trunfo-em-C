#include <stdio.h>

int main() {
    int x = 5;
    float y = 5.0;
    char c = 'a';
    // Valor na tabela ASCII de 'a' é 97

    printf("x >= y: %d\n", x >= y); //True = 1
    printf("x == y: %d\n", x == y); //True = 1
    printf("x != y: %d\n", x != y); //False = 0

    printf("x >= c: %d\n", x >= c); 
    printf("O valor ASCII de %c é: %d\n", c, c); 

    //vai comparar o valor de x (5) com o valor ASCII de 'a' (97)
    
    return 0;
}




