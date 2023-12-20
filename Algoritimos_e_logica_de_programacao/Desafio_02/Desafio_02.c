#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int maximo = 1000;

int main(){

    int num;
    int sorteio;
    int tentativa = 0;
    int menor = 1;
    int maior = 1000;

    srand(time (NULL));
    sorteio = rand() % 1000 + 1;

    do{

        printf("\nTentativa: %d. Entre um número maior que %d e menor que %d: ", tentativa + 1, menor, maior);
        scanf("%d", &num);
        tentativa++;
                 
        if(num < sorteio){
            menor = num;

        }else
            maior = num;

        if(num != sorteio) {

            if (num < sorteio / 2) {
                printf("Muito baixo.\n");

            }else if (num < sorteio && num > sorteio / 2) {
                printf("Pouco baixo.\n");

            }else if (num > ((maximo - sorteio) / 2) + sorteio) {
                printf("Muito alto.\n");

            } else if (num < ((maximo - sorteio) / 2) + sorteio && num > sorteio) {
                printf("Pouco alto.\n");

            }
        }

    }while(num != sorteio);

    printf("Parabens!!!\nVoce acertou o numero %d em %d tentativa(s).\n", sorteio, tentativa);

    if(tentativa >= 1 && tentativa <=5){                    //Avaliação de resultado
        printf("Voce, como adivinhador, eh excelente!");

    }else if(tentativa == 6 || tentativa == 7){
        printf("Voce, como adivinhador, eh bom");

    }else if(tentativa >= 8 && tentativa <= 12){
        printf("Voce, como adivinhador, eh normal");

    }else if(tentativa == 13 || tentativa == 14){
        printf("Voce, como adivinhador, eh ruim");
        
    }else if(tentativa >= 15){
        printf("Voce, como adivinhador, eh tragico");
    }

    return 0;
}