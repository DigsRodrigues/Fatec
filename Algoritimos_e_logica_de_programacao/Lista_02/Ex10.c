#include <stdio.h>

/*
    10. Ler três números e imprimir o maior.
*/

int main(){

    int num1;
    int num2;
    int num3;

    printf("Insira o primeiro valor:");
    scanf("%d", &num1);

    printf("Insira o segundo valor:");
    scanf("%d", &num2);

    printf("Insira o terceiro valor:");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("Numero %d e maior.", num1);
    }
    else if(num2 > num3){
        printf("Numero %d eh maior.", num2);
    }
    else
        printf("Numero %d eh maior.", num3);


    return 0;
}