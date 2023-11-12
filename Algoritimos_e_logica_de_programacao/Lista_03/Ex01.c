#include <stdio.h>

/*
    01.Usando estruturas de repetição, crie um programa onde você
    entra com 5 números e o programa imprima o quadrado de
    cada um.

*/

int main(){

int num;

for(int i = 1; i <= 5; i++){
    printf("Insira um valor: ");
    scanf("%d", &num);

    printf("o dobro de %d eh %d\n",num, num * num);
}

    return 0;
}