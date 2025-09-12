#include <stdio.h>

int main() {
    int preço1 = 76.0;
    int preço2 = 76.0;

    if (preço1 > preço2)
        printf("Preço1 e mais caro que o preço2");
    else
        if (preço1 < preço2)
        printf("preço2 e mais caro que o preço1");
    else
        printf("Os preços são iguais!");
    
        return 0;

    
}