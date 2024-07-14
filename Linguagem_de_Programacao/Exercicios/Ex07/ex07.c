#include <stdio.h>
#include "ex07.h"

void somaPar(){

    int num = 0;
    int par = 0;

    for(int i = 1; i <= 10; i++){

        printf("Insira um valor: \n");
        scanf("%d", &num);

        if(num %2 ==0){
            par += 1;
        }
    }

    printf("\n%d números pares\n", par);
}