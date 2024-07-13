#include <stdio.h>
#include <stdlib.h>
#include "ex10.h"

void limparTela(){

    system("clear");
}

int menu(void){

    int op = 0;

    printf("\n1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Sair\n");
    printf("Insira a operacao: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            return SOM;

        case 2:
            return SUB;

        case 3:
            return MUL;

        case 4:
            return DIV;

        case 5:
            return SAIR;

        default:
            printf("Operacao incorreta.\n");
    }

}

float soma(float a, float b){
    float res = a + b;
    return res;
}

float subtracao(float a, float b){

    float res = a - b;
    return res;
}

float multiplicacao(float a, float b){
    float res = a * b;
    return res;
}

float divisao(float a, float b){
    float res = a / b;
    return res;
}

void valores(float *a, float *b){

    float x = 0;
    float y = 0;
    
    printf("\nInsira um valor: ");
    scanf("%f", &x);
    printf("\nInsira outro valor: ");
    scanf("%f", &y);

    *a = x;
    *b = y;
}