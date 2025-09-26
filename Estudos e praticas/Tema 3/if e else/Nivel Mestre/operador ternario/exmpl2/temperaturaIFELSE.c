#include <stdio.h>

int main(){
    float temperatura = 31.5;
    int resultado;

   resultado = temperatura >= 37.5 ? 1 : 0;
    
    if (resultado == 1)
    {
        printf("Voce está com febre\n");
        
    }else{
        printf("Voce não está com febre\n");
    }

// "?" (Se for) 
// ":" (Se não for)
   
    return 0;

}
