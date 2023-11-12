#include <stdio.h>

/*
    02. Faça um programa que imprima todos os números pares entre
    1 e 10.
*/

int main(){

for(int i = 0; i <= 10; i++){
    if(i %2 == 0){
        printf("%d\n", i);
    }
    else
    continue;
}

return 0;
}