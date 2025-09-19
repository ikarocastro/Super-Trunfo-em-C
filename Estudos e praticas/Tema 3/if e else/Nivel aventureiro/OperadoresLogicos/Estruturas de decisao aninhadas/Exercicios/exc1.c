#include <stdio.h>

int main() {
  int idade;
  float renda;

    //Programa que verifica se uma pessoa está qualificada para um desconto especial com base na sua renda mensal. A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de 2000 reais//

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);

if (idade <= 18 || idade >= 60){
  
    if (renda < 2000)
{
    printf("Voce tem direito ao desconto!");
}else{
    printf("Voce não tem direito ao desconto!");
}
}else {
    printf("Voce não tem direito ao desconto mesmo!");
}

}