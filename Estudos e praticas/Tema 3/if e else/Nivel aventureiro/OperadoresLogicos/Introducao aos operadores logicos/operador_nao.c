#include <stdio.h>

int main() {

  int a = 10;

  if (!a){ //(!(a > 0)
    printf("A variave é zero.\n");
        //printf("a não e um numero positivo\n");

  }else{
    printf("A variavel e diferente de 0!");
  }

  //Em C toda variavel com qualquer outro numero e verdadeira, se for 0 e falsa!
  //pode- se ver que o IF que e verdadeiro nao foi acionado pois o NOT inverteu o valor!



}