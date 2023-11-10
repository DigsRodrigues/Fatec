#include <stdio.h>

/*
    15. Ler três notas, calcular a média e se esta for maior ou igual a 7
        imprimir aprovado ou reprovado.
*/

int main() {

    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Insira a nota1:");
    scanf("%f", &nota1);

    printf("Insira a nota2:");
    scanf("%f", &nota2);

    printf("Insira a nota3:");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 7){
        printf("Aprovado");
    }
    else
        printf("Desaprovado");

    return 0;
}