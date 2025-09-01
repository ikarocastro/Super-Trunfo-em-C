#include  <stdio.h>

int main() {

    //O mais correto e colocar as notas como float pois elas ja sao em casa decimais
    
    //int nota1, nota2, nota3;
    float nota1, nota2, nota3;
    float media;

            //tabela do começo do programa

    printf("*** Programa de Cálculo de Média ***\n");

            //Entrada e saída de dados
    printf("Digite a sua primeira nota: \n");
    scanf("%f", &nota1);
    
    printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    //usando cast (float) antes das notas para converter o resultado da soma para float
         
    media = (float)(nota1 + nota2 + nota3) / 3;
  
        //exbir o resultado da media 

    printf("A  média é: %.1f\n", media);
  
    //O .2 indica que queremos 2 casas decimais após a vírgula


    return 0;

}