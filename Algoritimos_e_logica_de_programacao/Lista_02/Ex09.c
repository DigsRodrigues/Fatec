#include <stdio.h>

/*
    09. Ler dois números e imprimi-los em ordem decrescente.
*/

int main() {

    int num1;
    int num2;

    printf("Insira um valor:");
    scanf("%d", &num1);

    printf("Insira outro valor:");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d\n%d", num1, num2);
    }
    else
        printf("%d\n%d", num2, num1);


    return 0;
}