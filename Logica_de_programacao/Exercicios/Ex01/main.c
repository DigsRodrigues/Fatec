#include <stdio.h>
#include "ex01.h"

int main(void){

    int idade;
    float valCompra;
    float novoValor = 0;
    
    printf("\nInsira um valor da compra: \n");
    scanf("%f", &valCompra);
    printf("Insira a idade: \n");
    scanf("%d", &idade);

    novoValor = desconto(valCompra, idade);

    printf("\nNovo valor: R$%2.f\n", novoValor);

    return 0;
}