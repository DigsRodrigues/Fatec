#include <stdio.h>
#include "ex08.h"

#define MAX 100

void tabela(){

    for(int i = 1; i <= MAX; i++){
        printf("%d\t", i);
        printf("%d\n", converter(i) );
    }
}

int converter(int f){

    int c;

    return c = (f-32) / 1.8;
}
