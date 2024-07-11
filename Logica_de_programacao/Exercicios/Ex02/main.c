#include <stdio.h>
#include <stdlib.h>
#include "ex02.h"

int main(void){

    int valor = 0;

    printf("Insira um numerod e 1 a 7: \n");
    scanf("%d", &valor);

    semana(valor);

    return 0;
}