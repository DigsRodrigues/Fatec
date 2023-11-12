#include <stdio.h>

/*
    06. Crie um programa que receba o ponto inicial, o final e o
    incremento e imprima os números de acordo com esta
    informação. Por exemplo: inicial = 5, final = 10, intervalo = 2,
    resultado: 5 7 9
*/

int incremento();                               //Fazendo uso de funções para pratica.

int main (){

    int inicio;
    int final;
    int intervalo;

    printf("Insira o valor inicial: ");
    scanf("%d", &inicio);

    printf("Insira o valor final: ");
    scanf("%d", &final);

    printf("Insira o intervalo: ");
    scanf("%d", &intervalo);

    if(intervalo >= 0){
        incremento(inicio, final, intervalo);
    }
    else{
        printf("Valor incorreto.\n");
    }

    return 0;
}


int incremento(int x, int y, int z){
    
    for(int i = x; i <= y; i += z){
        printf("%d\n", i);
    }
    return 0;
}