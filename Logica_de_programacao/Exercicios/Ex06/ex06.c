#include <stdio.h>
#include "ex06.h"

void pA(int raz){

    int serie = 1;
    int max = 10;

    for(int i = 0; i <= max; i++){
        printf("%d ", serie + i * raz);
    }

}
