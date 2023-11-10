#include <stdio.h>

/*
   05. Faça um programa que leia um número e imprima seu
       sucessor e antecessor.
*/

int main() {

    int num1;

    printf("Insira um valor:");
    scanf("%d", &num1);

    printf("Antecessor: %d\n", num1 - 1);
    printf("Sucessor: %d", num1 + 1);

    return 0;
}