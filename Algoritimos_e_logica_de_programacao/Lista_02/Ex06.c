#include <stdio.h>

/*
    06. Entrar com um número e imprimir se ele é igual a 20, menor ou
        maior.
*/

int main(){

    int num;

    printf("Insira um valor inteiro:");
    scanf("%d", &num);

    if(num > 20){
        printf("Numero maior que 20.");
    }
    else if(num < 20){
        printf("Numero menor que 20");
    }
    else
        printf("Numero eh igual a 20");


    return 0;
}