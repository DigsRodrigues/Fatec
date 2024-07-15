#include <stdio.h>
#include "desafio02.h"

int somatoria(int num){

    if(num == 1){
        return;
    }
    return somatoria(num - 1) + num;

}