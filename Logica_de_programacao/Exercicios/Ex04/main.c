#include <stdio.h>
#include <stdlib.h>
#include "ex04.h"

int main(void){

    int hora = 0;

    printf("Insira a hora: \n");
    scanf("%d", &hora);

    printf("\n%s", periodo(hora));

}