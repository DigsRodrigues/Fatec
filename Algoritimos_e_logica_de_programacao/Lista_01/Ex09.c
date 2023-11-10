#include <stdio.h>

/*
     09. Faça um programa que você entra com o saldo de uma
         aplicação e o sistema calcula e imprime o novo saldo para um
         rendimento de 3,5%
*/

int main() {

    float saldo;
    float novosaldo;

    printf("Insira o valor da aplicacao:");
    scanf("%f", &saldo);

    novosaldo = saldo + (saldo * 0.35);

    printf("Novo saldo: %.2f", novosaldo);


    return 0;
}