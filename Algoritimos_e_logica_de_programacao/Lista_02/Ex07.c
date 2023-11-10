#include <stdio.h>

/*
    07. Fazer um programa que leia dois números e imprima se eles
        são iguais ou diferentes.
*/

int main() {

    int num1;
    int num2;

    printf("Insira um valor:");
    scanf("%d", &num1);

    printf("Insira outro valor:");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("Valores iguais.");
    }
    else
        printf("Valores diferentes.");


    return 0;
}