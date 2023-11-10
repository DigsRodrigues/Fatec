#include <stdio.h>

/*
    18. Em um campeonato de arco e flecha tem-se equipes de três
        atletas para cada estado. Crie um programa que leia a quantidade
        de pontos obtidos por cada um deles e informe se a equipe foi
        classificada de acordo com a seguinte especificação:

        ▪Ler os pontos de cada jogador da equipe
        ▪Mostrar os valores em ordem crescente
        ▪Se a soma dos pontos for maior que 100, imprimir a média dos pontos,
         senão imprimir desclassificada
*/

int main() {

    float atleta1;
    float atleta2;
    float atleta3;
    float soma;
    float media;
    float aux;
    float maior;
    float meio;
    float menor;

    printf("Ponto 1:");
    scanf("%f", &atleta1);

    printf("Ponto 2:");
    scanf("%f", &atleta2);

    printf("Ponto 3:");
    scanf("%f", &atleta3);

    if(atleta1 >= atleta2 && atleta1 >= atleta3){
        maior = atleta1;

        if(atleta2 >= atleta3){
            meio = atleta2;
            menor = atleta3;
        }
        else {
            meio = atleta3;
            menor = atleta2;
        }
    }

    if(atleta2 >= atleta1 && atleta2 >= atleta3){
        maior = atleta2;

        if(atleta1 >= atleta3){
            meio = atleta1;
            menor = atleta3;
        }
        else {
            meio = atleta3;
            menor = atleta1;
        }
    }

    if(atleta3 >= atleta2 && atleta3 >= atleta1){
        maior = atleta3;

        if(atleta2 >= atleta1){
            meio = atleta2;
            menor = atleta1;
        }
        else {
            meio = atleta1;
            menor = atleta2;
        }
    }

    printf("Pontuacao:\n1 - \t%.2f\n2 - \t%.2f\n3 - \t%.2f\n", menor, meio, maior);

    soma = atleta1 + atleta2 + atleta3;
    media = soma / 3;

    if(soma >= 100){
        printf("Media:\t%.2f\nClassificados.", media);

    }
    else{
        printf("Desclassificados.");
    }

    return 0;
}