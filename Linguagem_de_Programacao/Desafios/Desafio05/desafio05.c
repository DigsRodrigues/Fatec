#include <stdio.h>
#include "desafio05.h"

int swap(int *a, int *b){

    int c = *a;
    *a = *b;
    *b = c;
    
    return 0;
}