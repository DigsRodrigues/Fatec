#include <stdio.h>

/*
    02. Ler um número e imprimir se ele é positivo, negativo ou nulo.
*/

int main() {

    int num;

    printf("Insira um valor:");
    scanf("%d", &num);

    if(num > 0){
        printf("Numero positivo.");
    }
    else if(num <- 0){
        printf("Numero Negativo.");
    }
    else
        printf("Numero nulo.");


    return 0;
}