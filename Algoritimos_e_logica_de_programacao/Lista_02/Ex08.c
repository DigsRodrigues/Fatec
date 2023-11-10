#include <stdio.h>

/*
    08. Entrar com dois números e imprimir o maior
*/

int main() {

    int num1;
    int num2;

    printf("Insira um valor:");
    scanf("%d", &num1);

    printf("Insira outro valor:");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("Maior eh %d", num1);
    }
    else
        printf("Maior eh %d", num2);


    return 0;
}