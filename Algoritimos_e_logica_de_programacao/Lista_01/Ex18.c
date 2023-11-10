#include <stdio.h>

/*
    18. Leia dois valores para as variáveis A e B, efetuar a troca dos
        valores de forma que A passe a ter o valor de B e B passe a ter
        o valor de A.
*/

int main() {

    int a;
    int b;
    int c;

    printf("Insira o valor de A:");
    scanf("%d", &a);

    printf("\nInsira o valor de B:");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("A = %d\nB = %d", a, b);

    return 0;
}