#include <stdio.h>

int main() {

    int idade;

    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    //Criança < 12
    //Adolescente <= x <18      //o 'X' e entre 
    //Adulto <= x < 60
    //Idoso < 60

    if (idade > 60)
    {
        printf("Voce é um idoso!");
    } else if (idade < 60 && idade > 18){
        printf("Voce é aldulto!");
    }else if (idade <=18 && idade > 12){
        printf("Voce é adolescente!");
    }else{
        printf("Voce é criança!");
    }
    
    
    

}