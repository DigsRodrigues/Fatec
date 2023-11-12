#include <stdio.h>

/*
    07. Faça um programa onde você entre com 10 números e no
final imprima qual foi o maior e qual foi o menor.

*/
enum{
    DOWN = 0,
    UP
};

int main(){

    int flag = UP;
    int num;
    int maior;
    int menor;
    int i;

    for(i = 1; i <=10; i++){

        printf("Insira um valor:");
        scanf("%d", &num);

        if(flag == UP){
            maior = num;
            menor = num;
            flag = DOWN;
        }
        else{
            if(num > maior){
                maior = num;
            }
            else if(num < menor){
                menor = num;
            }
        }
    }

    printf("O maior numero foi %d\n", maior);
    printf("O menor numero foi %d\n", menor);

    return 0;
}