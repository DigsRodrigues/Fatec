#include <stdio.h>

/*
    14. Faça um programa que efetue o cálculo de salário líquido de
        um professor. O programa deve pedir a quantidade de aulas
        dadas, o valor de hora aula e o percentual de desconto do
        INSS.
*/

int main() {

    float quantidade;
    float ValorHora;
    float inss;
    float desconto;
    float salario;

    printf("Insira a quantidade de aulas:");
    scanf("%f", &quantidade);

    printf("\nInsira o valor da hora/aula:");
    scanf("%f", &ValorHora);

    printf("\nInsira o desconto do INSS:");
    scanf("%f", &inss);

    desconto = inss / 100;

    salario = salario - (salario * desconto);

    printf("\nSalario liquido = %.2f", salario);

    return 0;
}