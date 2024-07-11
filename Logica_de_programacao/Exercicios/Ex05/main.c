#include <stdio.h>
#include <stdlib.h>
#include "ex05.h"

int main(){

    int rodas = 0;

    printf("Insira a quantidade de rodas: \n");
    scanf("%d", &rodas);

    veiculo(rodas);

    return 0;
}