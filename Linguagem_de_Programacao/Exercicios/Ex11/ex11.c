#include <stdio.h>
#include "ex11.h"

float celsius(){

    float temperatura = 0;
    float resultado = 0;

    printf("Insira a temperatura em celsius: ");
    scanf("%f", &temperatura);

    resultado = temperatura * 9 / 5 + 32;

    printf("\n%2.f Fahrenheit.\n", resultado);

}

float fahrenheit(){

    float temperatura = 0;
    float resultado = 0;

    printf("Insira a temperatura em celsius: ");
    scanf("%f", &temperatura);

    resultado = (temperatura - 32) * 5 / 9;

    printf("\n%2.f Celsius.\n", resultado);
}