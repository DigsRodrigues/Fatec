#include <stdio.h>

/*
    13. Escreva um programa em C que solicite um determinado
        número de segundos e, em seguida, imprima quantas horas,
        minutos e segundos ele representa.
*/

int main() {

    int seg;
    int hora;
    int min;

    printf("Insira os segundos: \n");
    scanf("%d", &seg);

    hora = seg / 3600;

    min = (seg % 3600) / 60;

    seg = seg % 60;

    printf("%d hora(s) %d minuto(s) %d segundo(s)", hora, min, seg);

    return 0;
}