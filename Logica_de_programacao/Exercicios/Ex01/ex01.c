#include <stdio.h>
#include "ex01.h"

float desconto(float valCompra, int idade){

    int desc = 0;
    int novoValor = 0;

    if(idade < 18){
        
        desc = 5;

    }else if(idade >= 18 && idade <= 60){

        desc = 10;

    }else if(idade > 60){

        desc = 15;
    }


    if(desc == 5){

        novoValor = valCompra - (valCompra * 0.05);

    }else if (desc == 10)
    {
        novoValor = valCompra - (valCompra * 0.1);

    }else if(desc == 15){

        novoValor = valCompra - (valCompra * 0.15);
    }

    return novoValor;
    }