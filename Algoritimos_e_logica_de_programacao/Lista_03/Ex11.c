#include <stdio.h>

/*
    Ex 11. Dois alienígenas crescem indefinidamente. Zerg tem 1,50m e
        cresce 2cm por ano enquanto Splim tem 1,30m e cresce 3cm
        por ano. Faça um programa que calcule quantos anos serão
        necessários para que Splim seja maior que Zerg.
 */

int main() {

    float zerg = 1.5;
    float splim = 1.3;
    int i =0;

    while(splim < zerg){
        zerg += 0.02;
        splim += 0.03;
        i++;
    }

    printf("Splim ultrapassou Zerg em %d anos.\n", i);

    return 0;
}