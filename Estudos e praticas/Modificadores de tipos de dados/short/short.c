#include <stdio.h>

int main() {
    short int numeroPequeno = 32767; // Valor máximo para short int
    printf("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // Valor maior que o maximo de  short int
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

    printf("\n*** Tamanho das variaveis ***\n");
    printf("short int: %lu B - int: %lu B - long int: %lu b\n", sizeof(short int), sizeof(int), sizeof(long long int));
    printf("float: %lu b - double: %lu b - long double: %lu b\n", sizeof(float), sizeof(double), sizeof(long double));
    
    
    return 0;

    // o short usamos quando precisamos de uma variavel inteira, que ocupa menos memoria e o valor esta dentro do permitido.

    //O long voce vai usar quando precisar trabalhar com numeros inteiros muito grandes, fora do alcançe de um inteiro normal.

    //O signed padrao dos inteiros e do char para trabalhar com valores positivos e negativos, o unsigned voce usa quando precisa trabalhar apenas com valores positivos, assim dobrando o valor maximo que pode ser armazenado.

}