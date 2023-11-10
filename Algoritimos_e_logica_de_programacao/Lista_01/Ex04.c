#include <stdio.h>

/*
   04. Faça um programa que leia dois inteiros e os imprime na tela.
*/

int main() {

    int num1;
    int num2;

    printf("Insira o primeiro valor:");
    scanf("%d", &num1);

    printf("Insira o segundo valor:");
    scanf("%d", &num2);


    printf("Os numeros inseridos foram: %d e %d.", num1, num2);

    return 0;
}