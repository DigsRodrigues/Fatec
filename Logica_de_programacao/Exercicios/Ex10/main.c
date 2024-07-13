#include <stdio.h>
#include "ex10.h"

int main(){

    opMenu opcao = MENU;

    while(1){

        float a = 0;
        float b = 0;
        float res = 0;
        char c;
        
        if(opcao == MENU){
            limparTela();
            opcao = menu();

         } else if(opcao == SOM){
            limparTela();
            valores(&a, &b);
            printf ("%.2f + %.2f = %.2f", a, b, soma(a, b));
            getchar();
            opcao = MENU;

         } else if(opcao == SUB){
            limparTela();
            valores(&a, &b);
            printf ("%.2f - %.2f = %.2f", a, b, subtracao(a, b));
            getchar();
            opcao = MENU;

         } else if(opcao == MUL){
            limparTela();
            valores(&a, &b);
            printf ("%.2f x %.2f = %.2f", a, b, multiplicacao(a, b));
            getchar();
            opcao = MENU;

         } else if(opcao == DIV){
            limparTela();
            valores(&a, &b);
            printf ("%.2f / %.2f = %.2f", a, b, divisao(a, b));
            getchar();
            opcao = MENU;

         } else if(opcao == SAIR){
            limparTela();
            printf("Fechando programa.\n");
            break;
        }
    }

    return 0;
}