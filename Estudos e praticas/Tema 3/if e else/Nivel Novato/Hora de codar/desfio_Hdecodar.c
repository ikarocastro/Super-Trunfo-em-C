#include <stdio.h>

int main() {

    float temperatura, umidade;
    unsigned int estoque;
    unsigned int estoqueminimo = 1000;

    printf("Entre comn a temperatura:\n");
        scanf("%f", &temperatura);
    printf("Entre com a umidade:\n");
        scanf("%f", &umidade);
    printf("Entre com o estoque:\n");
        scanf("%u", &estoque);

        //Verificar temperatura!
if (temperatura > 30.0){
    printf("Temperatura está alta!\n");
}
else {
    printf("Temperatura esta dentro do normal!!\n");
}

        //Verificar Umidade!

if (umidade > 50.0){
    printf("Umidade está Critica! elevada!\n");
}
else{
    printf("Umidade está nos padrões!\n");
}

        //Verificar Estoque!

if (estoque > estoqueminimo){
    printf("Está com o estoque em dia!\n");
}
else{
    printf("Precisa de reposição no estoque!\n");
}

}