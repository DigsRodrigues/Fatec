#include <stdio.h>

/*
    12. Faça um programa que entre com o valor de um produto e uma
        porcentagem de desconto e imprima o valor com desconto.
*/

int main() {

    float valor;
    float desconto;
    float novovalor;

    printf("Insira o valor:");
    scanf("%f", &valor);

    printf("Insira o desconto:");
    scanf("%f", &desconto);

    novovalor = valor - (valor * (desconto / 100));

    printf("\nValor com desconto: %.2f", novovalor);

    return 0;
}