#include <stdio.h>
#include <stdlib.h>
#include "ex03.h"

int main(void){


    float nota;

    printf("Insira o valor da nota: \n");
    scanf("%f", &nota);

    desempenho(nota);

    return 0;
}