#include <stdio.h>

/*
    13. Criar um programa aonde você seja capaz de digitar números
        e tenha o fatorial deste número calculado e impresso. O
        programa termina quando um valor menor do que 1 é digitado.
*/

int main() {

    int num = 2;

    do{
        printf("Insira um valor: ");
        scanf("%d", &num);

        for(int i = num - 1; i >= 1; i--){
            num = num * i;
        }

        printf("O fatorial eh: %d\n", num);

    }while(num > 1);

    return 0;
}