#include <stdio.h>
#include <stdlib.h>
#include "ex06.h"

int main(){

    int raz = 0;

    printf("Insira o valor da razao: \n");
    scanf("%d", &raz);

    pA(raz);

    putchar('\n');

    return 0;
}