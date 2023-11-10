# include <stdio.h>
/* 
    13. Ler 5 numeros e imprimir o maior e o menor.
*/
int main() {

    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int maior;
    int menor;

    printf("Insira o primeioro valor:");
    scanf("%d", &num1);

    printf("Insira o segundo valor:");
    scanf("%d", &num2);

    printf("Insira o terceiro valor:");
    scanf("%d", &num3);

    printf("Insira o quarto valor:");
    scanf("%d", &num4);

    printf("Insira o quinto valor:");
    scanf("%d", &num5);

    maior = num1;
    menor = num1;

    if(num2 > maior){
        maior = num2;
    }
    else if(num2 < menor){
        menor = num2;
    }

    if(num3 > maior){
        maior = num3;
    }
    else if(num3 < menor){
        menor = num3;
    }

    if(num4 > maior){
        maior = num4;
    }
    else if(num4 < menor){
        menor = num4;
    }

    if(num5 > maior){
        maior = num5;
    }
    else if(num5 < menor){
        menor = num5;
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);


    return 0;
}