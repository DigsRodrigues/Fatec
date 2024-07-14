#include <stdio.h>
#include <stdlib.h>
#include "ex11.h"

int main(){

    int op = 0;

    printf("Selecione uma opcao: \n");
    printf("1 - Celsius -> Fahrenheit\n");
    printf("2 - Fahrenheit -> Celsius\n");
    scanf("%d", &op);

    switch(op){
        case 1:
            celsius();
            break;
        
        case 2:
            fahrenheit();
            break;
        
        default:
            printf("Valor incorreto.\n");
    }
    return 0;
}