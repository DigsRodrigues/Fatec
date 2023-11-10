#include <stdio.h>

/*
    10. Sabendo que o perímetro de um círculo é calculado pela
        fórmula: 2 × 𝜋 × 𝑟𝑎𝑖𝑜, e a área pela fórmula 𝜋 × 𝑟𝑎𝑖𝑜 2 , faça
        um programa que dado o raio de um círculo ele calcule o
        perímetro e a área deste.
*/
int main() {

    float perimetro;
    float raio;
    float PI;

    PI = 3.1415;

    printf("Insira o valor do raio:");
    scanf("%f", &raio);

    perimetro = PI * raio * 2;

    printf("\nO perimetro eh: %.2f", perimetro);

    return 0;
}