#include <stdio.h>

/*
    19. Faça um programa que leia o numerador e o denominador de
        uma fração e calcule seu valor decimal.
*/

int main() {

    float numerador;
    float denominador;
    float valor;

    printf("Insira o numerador:");
    scanf("%f", &numerador);

    printf("\nInsira o denominador:");
    scanf("%f", &denominador);

    valor = numerador / denominador;

    printf("\nO valor decimal da fracao eh: %.2f", valor);

    return 0;
}