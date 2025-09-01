#include <stdio.h>
 
int main() {
    unsigned long int largePositiveNumber = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    //long int numeroGrande = 4000000000; //Não conseguiu compilar, Agora vamos add mais um long
    long long int numeroGrande = 4000000000;
    //esse foi compilado com sucesso
    int numero = 4000000000;
    //esse não conseguiu compilar por naão ter capacidade de armazenar esse valor

    printf("Número positivo grande: %lu\n", largePositiveNumber);
    printf("Número positivo: %u\n", numeroPositivo);
    printf("Número grande: %lld\n", numeroGrande); //add mais um l para long long
    printf("Número: %d\n", numero);
 
    return 0;

    //Obs em outros compiladores não a necessidade de usar o long long int, apenas o long int já é suficiente para armazenar esse valor, mas no vs code não foi possível, se trata por outros compiladores terem tamanhos diferentes para os tipos de dados em bytes.


}