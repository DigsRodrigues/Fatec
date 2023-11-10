#include <stdio.h>

/*
    07.  Ler um número real e imprimir a terça parte dele.
*/

int main() {

    float num1;

    printf("Insira um valor:");
    scanf("%f", &num1);

    printf("A terca parte de %.2f eh %.2f", num1, num1 / 3);

    return 0;
}