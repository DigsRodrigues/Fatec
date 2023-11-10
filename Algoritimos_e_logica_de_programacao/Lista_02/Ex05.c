#include <stdio.h>

/*
    05. Ler um número com três dígitos e imprimir se o algarismo da
        casa das centenas é par.
*/

int main() {

    int num;
    int i;

    printf("Insira um valor (3 digitos):");
    scanf("%d", &num);

    i = num / 100;

    if(i %2 == 0){
        printf("O primeiro numero eh par.");
    }
    else
        printf("O primeiro numero nao eh par.");


    return 0;
}