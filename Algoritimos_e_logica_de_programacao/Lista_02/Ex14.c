#include <stdio.h>

/*
    14. Ler três números e verificar se eles podem representar os
        lados de um triângulo. A regra é que um lado deve ser menor
        que a soma dos outros dois lados.
*/

int main() {

    int lado1;
    int lado2;
    int lado3;
    int soma1;
    int soma2;
    int soma3;

    printf("Insira o lado 1 do triangulo:");
    scanf("%d", &lado1);

    printf("Insira o lado 2 do triangulo:");
    scanf("%d", &lado2);

    printf("Insira o lado 3 do triangulo:");
    scanf("%d", &lado3);

    soma1 = lado2 + lado3;
    soma2 = lado1 + lado3;
    soma3 = lado1 + lado2;

    if(lado1 < soma1 && lado2 < soma2 && lado3 < soma3){
        printf("Sao valores de um triangulo.");
    }
    else
        printf("Não sao valores de um triangulo");


    return 0;
}