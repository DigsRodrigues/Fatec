#include <stdio.h>

/*
    10. Ler vários número e quando terminar mostrar quantos foram
        entre 100 e 200. O programa termina quando número for zero.
*/

int main() {

    int num = 1;
    int i = 0;

    while(num != 0){
        printf("Insira um valor: ");
        scanf("%d", &num);

        if(num >= 100 && num <= 200){
            i++;
        }
    }

    printf("%d digitados foram entre 100 e 200.", i);

    return 0;
}