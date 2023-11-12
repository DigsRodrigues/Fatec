#include <stdio.h>

/*
    14. Faça um programa aonde você digite vários números e no final
        imprima quantos foram digitados, a soma deles, a média, o
        maior e o menor. O programa termina quando for digitado zero.
*/

enum{
    DOWN = 0,
    UP
};

int main() {

    int num;
    int qtd = 0;
    int soma;
    float media;
    int maior;
    int menor;
    int flag = UP;

    do{

        printf("Insira um valor:");
        scanf("%d", &num);
        

        if(flag == UP && num != 0) {
            maior = num;
            menor = num;
            soma = num;
            flag = DOWN;

        }else{
            qtd++;
            if(num > maior && num != 0){
                maior = num;
            }
            if(num < menor && num != 0){
                menor = num;
            }

            soma += num;
            media = (float)soma / qtd;
        }

        
    }while(num != 0);

    printf("Quantidade de valores digitados: %d\n", qtd);
    printf("A soma dos valores: %d\n", soma);
    printf("A media dos numeros digitados foi: %.2f\n", media);
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);

    return 0;
}