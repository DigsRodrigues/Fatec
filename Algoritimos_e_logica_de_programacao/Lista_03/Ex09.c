#include <stdio.h>

/*
    09. Entrar com números e imprimir o triplo de cada um deles. O
        programa termina quando digitar -999.
*/

int main() {

    int num;

    do{
        printf("Insira um valor:");
        scanf("%d", &num);

        if(num == -999){
            break;
        }

        printf("O triplo de %d eh %d.\n", num, num * 3);

    }while(1);

    return 0;
}