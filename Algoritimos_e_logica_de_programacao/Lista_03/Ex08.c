#include <stdio.h>

/*
    08. Ler o número de termos da série (n) e imprimir o valor de H
        sendo: 𝐻 = 1/1 + 1/2 + 1/3 +...+ 1/n.
 */

int main() {

    int num;
    float h;

    printf("Insira o valor de termo:");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){

        h += (float)1/i;
    }

    printf("O valor de H eh: %.4f\n", h);

    return 0;
}