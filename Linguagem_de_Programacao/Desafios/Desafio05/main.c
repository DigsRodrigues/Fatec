#include <stdlib.h>
#include <stdio.h>
#include "desafio05.h"

int main(){

    int a = 10;
    int b = 20;

    printf("a - %d\nb - %d\n", a, b);
    printf("swap\n");
    swap(&a, &b);
    printf("a - %d\nb - %d", a, b);

}
