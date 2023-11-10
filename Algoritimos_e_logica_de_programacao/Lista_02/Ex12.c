#include <stdio.h>

/*
    12. Ler três números e guarda-los em três variáveus com os nomes: maior, 
    intermediário e menor.
*/

int main() {

    int num1;
    int num2;
    int num3;
    int intermediario;
    int maior;
    int menor;

    printf("Insira o primeiro valor:");
    scanf("%d", &num1);

    printf("Insira o segundo valor:");
    scanf("%d", &num2);

    printf("Insira o terceiro valor:");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        maior = num1;

        if(num2 > num3){
            intermediario = num2;
            menor = num3;
        }
        else{
            intermediario = num3;
            menor = num2;
        }
    }
    
    if(num2 > num1 && num2 > num3){
        maior = num2;

        if(num1 > num3){
            intermediario = num1;
            menor = num3;
        }
        else{
            intermediario = num3;
            menor = num1;
        }
    }

    if(num3 > num1 && num3 > num2){
        maior = num3;

        if(num1 > num2) {
            intermediario = num1;
            menor = num2;
        }
        else{
            intermediario = num2;
            menor = num1;
        }
    }

    printf("Maior = %d\n", maior);
    printf("Inter = %d\n", intermediario);
    printf("Menor = %d\n", menor);

    return 0;
}