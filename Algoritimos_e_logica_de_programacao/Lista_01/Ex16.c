#include <stdio.h>

/*
    16. Efetuar o cálculo da quantidade de litros de combustível gastos
        em uma viagem, sabendo-se que o carro faz 12km por litro.
        Deverão ser fornecidos o tempo gasto na viagem e a
        velocidade média.
        ▪Distância = 𝑡𝑒𝑚𝑝𝑜 × 𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑𝑒
        ▪Litros = 𝑑𝑖𝑠𝑡â𝑛𝑐𝑖𝑎 ÷ 12
*/

int main() {

    float LitroGasto;
    float distancia;
    float TempoViagem;
    float velocidade;

    printf("Insira o tempo de viagem em hora:");
    scanf("%f", &TempoViagem);

    printf("\nInsira a velocidade media da viagem");
    scanf("%f", &velocidade);

    distancia = TempoViagem * velocidade;

    LitroGasto = distancia / 12;

    printf("Litros gasto na viagem: %.2f", LitroGasto);

    return 0;
}