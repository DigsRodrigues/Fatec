#include <stdio.h>
#include <stdlib.h>
#include "desafio02.h"

int main(){

    int num = 0;
    
    printf("Insira o valor de numeros: ");
    scanf("%d", &num);

    int res = somatoria(num);

    printf("\nA soma dos primeiros %d numeros eh: %d.\n", num, res);
    
    return 0;
}