#include <stdio.h>

/*
    11. Ler três números e imprimo-los em ordem crescente.
*/
int main() {

    int x;
    int y;
    int z;
    int num1;
    int num2;
    int num3;

    printf("Insira o primeiro valor:");
    scanf("%d", &num1);

    printf("Insira o segundo valor:");
    scanf("%d", &num2);

    printf("Insira o terceiro valor:");
    scanf("%d", &num3);

    putchar('\n');

    if((num1 > num2 && num1 > num3) && num2 > num3 ){
        printf("%d\n%d\n%d", num3, num2, num1);
    }
    else if(num3 > num2){
        printf("%d\n%d\n%d", num2, num3,num1);
    }
    
    if((num2 > num1 && num2 > num3) && num1 > num3) {
        printf("%d\n%d\n%d", num3, num1, num2);
    }
    else if(num3 > num1){
        printf("%d\n%d\n%d", num1, num3, num2);
    }
    
    if((num3 > num2 && num3 > num1) && num2 > num1){
        printf("%d\n%d\n%d", num1, num2, num3);
    }
    else if(num1 > num2){
        printf("%d\n%d\n%d", num2, num1, num3);
    }


    return 0;
}