#include <stdio.h>
#include <stdlib.h>
#include "ex02.h"

void semana(int valor){

switch(valor){
        case 1:
        printf("\nDomingo\n");
            break;

        case 2:
        printf("\nSegunda-Feira\n");
            break;

        case 3:
        printf("\nTerça-Feira\n");
            break;

        case 4:
        printf("\nQuarta-Feira\n");
            break;

        case 5:
        printf("\nQuinta-Feira\n");
            break;

        case 6:
        printf("\nSexta-Feira\n");
            break;

        case 7:
        printf("\nSabado");
            break;

        default:
        printf("\nValor incoreto");
    }
}