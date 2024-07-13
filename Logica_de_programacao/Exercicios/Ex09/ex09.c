#include <stdio.h>
#include "ex09.h"

void soma (){

    int vetor[10] = {0};
    int soma = 0;
    int x = 0;


    for(int i = 1; i <= 10; i++){
        printf("Insira um valor: \n");
        scanf("%d", &x);
        soma += x;
    }

    printf("Soma dos elementos: %d.\n", soma);
}