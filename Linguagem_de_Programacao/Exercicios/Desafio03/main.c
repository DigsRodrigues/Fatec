#include <stdio.h>
#include <stdlib.h>
#include "desafio03.h"

int main(){

    int base = 0;
    int expoente = 0;
    int res = 0;

    printf("Base: \n");
    scanf("%d", &base);
    printf("Expoente: \n");
    scanf("%d", &expoente);

    res = potencia(base, expoente);

    printf("Resultado: %d\n", res);

    return 0;
}