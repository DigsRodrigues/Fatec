#include <stdio.h>

/*
    17.Efetuar o cálculo de uma prestação em atraso usando a
        seguinte fórmula: prestação = valor + ( valor x (taxa/100) x tempo).
*/

int main() {

    float valor;
    float taxa;
    float tempo;
    float prestacao;

    printf("Insira o valor da parcela:");
    scanf("%f", &valor);

    printf("\nInsira a taxa:");
    scanf("%f", &taxa);

    printf("\nInsira os meses em atraso:");
    scanf("%f", &tempo);

    taxa = taxa / 100;

    prestacao = valor + (valor * taxa * tempo);

    printf("Valor a ser pago:R$%.2f", prestacao);


    return 0;
}