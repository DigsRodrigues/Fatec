#include <stdio.h>

/*
    01. Ler um número e se ele for maior que 20, então imprimir a
        metade do número.
*/

int main() {

    int num;

    printf("Insira um valor:");
    scanf("%d", &num);

    if(num > 20){
        printf("metade: %d", num / 2);
    }
    else
        printf("Valor menor que 20");

    return 0;
}