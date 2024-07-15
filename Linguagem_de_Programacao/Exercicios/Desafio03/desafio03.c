#include <stdio.h>
#include "desafio03.h"

int potencia(int base, int expoente){

    if(expoente == 0){
        return 1;
    }
    return base * potencia(base, expoente - 1);

}