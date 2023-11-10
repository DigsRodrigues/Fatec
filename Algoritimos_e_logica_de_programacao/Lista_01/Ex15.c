#include <stdio.h>

/*
    15. Para se calcular o volume de um cilindro usamos a seguinte
        fórmula: 𝜋 × 𝑟𝑎𝑖𝑜 2 × 𝑎𝑙𝑡𝑢𝑟𝑎, faça um programa que dado a
        altura de uma lata e seu raio, calcule seu volume.
*/

int main() {

    float altura;
    float raio;
    float PI = 3.14159;
    float area;

    printf("Insira a altura em centimentros:");
    scanf("%f", &altura);

    printf("\nInsira o raio");
    scanf("%f", &raio);

    area = (raio * raio) * PI * altura;

    printf("\nO valor da area eh %.2f centimetros", area);

    return 0;
}