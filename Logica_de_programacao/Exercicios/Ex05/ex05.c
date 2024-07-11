#include <stdio.h>
#include "ex05.h"

void veiculo(int rodas){

    switch(rodas){
        case 2:
        printf("\nBicicleta.\n");
            break;

        case 4:
        printf("\nCarro.\n");
            break;

        default:
        printf("\nOutro tipo.\n");
    }
}