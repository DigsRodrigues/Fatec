#include <stdio.h>
#include "desafio01.h"

void down(int n){

    if(n < 1){ 
        return;
    }
    printf("%d ", n);
    down(n - 1);
}