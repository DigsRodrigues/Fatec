#include <stdio.h>

/*
    08. Ler dois números reais e imprimir a média aritmética deles.
*/

int main() {

    float num1;
    float num2;
    float media;

    printf("Insira o primeiro valor:");
    scanf("%f", &num1);

    printf("Insira o segundo valor:");
    scanf("%f", &num2);

    media = (num1 + num2) / 2;

    printf("A media entre %.2f e %.2f = %.2f", num1, num2, media);

    return 0;
}