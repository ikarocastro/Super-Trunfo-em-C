#include <stdio.h>

int main() {

    //Declarar variaveis Produto, u i estoque, doble valor unitario, doble valor total
    
    char produtoA[30] = "ProdutoA";
    char produtoB[30] = "ProdutoB";
    
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valortotalA;
    double valortotalB;  

    int resultadoA, resultadoB;

    //Exibir as informacoes dos produtos
    printf("Produto: %s tem em estoque %u e o valor unitario é  R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto: %s tem em estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);
    
    //comparação com o valor minimo de estoque
    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;
 
    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);
 
    //Comparação dos valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
    
    return 0;   
}