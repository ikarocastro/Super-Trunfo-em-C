#include <stdio.h>

int main() {

    int idade;

    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    //Criança < 12
    //Adolescente <= x <18      //o 'X' e entre 
    //Adulto <= x < 60
    //Idoso < 60

    if (idade < 12){
        printf("Voce e uma criança!\n");
    }else if (idade >= 12 && idade <18)
    {
        printf("Você é um adolescente! \n");
    }else if(idade >= 18 && idade < 60){
        printf("Voce é um adulto\n");
    }else{
        printf("Voce é um idoso!\n");
    }
    
    

}