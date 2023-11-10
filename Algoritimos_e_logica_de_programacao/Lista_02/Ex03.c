#include <stdio.h>

/*
    03. Ler um número e imprimir se ele é ou não múltiplo de 3.
*/

int main() {

    int num;

    printf("Insira um valor:");
    scanf("%d", &num);

    if(num %3 == 0){
        printf("Numero e divisivel por 3.");
    }
    else
        printf("Numero nao eh divisivel por 3.");

    return 0;
}