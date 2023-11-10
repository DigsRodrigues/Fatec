#include <stdio.h>

/*
    06. Ler dois números inteiros e imprimir a soma deles.
*/

int main() {

    int num1;
    int num2;
    int soma;

    printf("Insira o primeiro valor:");
    scanf("%d", &num1);

    printf("Insira o segundo valor:");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("\nA soma entre %d e %d = %d.", num1, num2, soma);

    return 0;
}