#include <stdio.h>

/*
    11. Sabendo que 100 quilowatts de energia custa um sétimo de
        um salário mínimo, faça um programa que receba o valor do
        salário mínimo e a quantidade de quilowatts gasta em uma
        residência e imprima:
        ▪O valor em Reais do quilowatt
        ▪O valor em Reais a ser pago
        ▪O valor a ser pago com 10% de desconto
*/

int main() {

    float salario;
    float qwatt;
    float qwatts;
    float desconto;

    printf("Insira o salario minimo:");
    scanf("%f", &salario);

    qwatt = (salario / 7) / 100;
    qwatts = qwatt * 100;

    desconto = qwatts - (qwatts * 0.1);

    printf("Valor do quilowatt: %.2f\n", qwatt);
    printf("Valor de 100 quilowatt: %.2f\n", qwatts);
    printf("Valor pago com desconto: %.2f\n", desconto);

    return 0;
}