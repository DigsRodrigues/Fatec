#include <stdio.h>

/*
    20. Um restaurante cobra de seus clientes 10% da conta como
        gorjeta para o garçom. Faça um programa que receba o valor
        dos gastos, calcule a gorjeta e mostre na tela o valor inicial, a
        gorjeta e o valor total da conta.
*/
int main() {

    float conta;
    float gorjeta;
    float contapaga;

    printf("Insira o valor da conta:");
    scanf("%f", &conta);

    gorjeta = conta * 0.1;

    contapaga = conta + gorjeta;

    printf("\nValor da conta: %.2f", conta);
    printf("\nValor da gorjeta: %.2f", gorjeta);
    printf("\nValot total: %.2f\n", contapaga);

    return 0;
}