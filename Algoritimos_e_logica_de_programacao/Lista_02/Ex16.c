#include <stdio.h>

/*
    15. Acontecerá um campeonato de natação e devemos verificar em
    qual categoria o atleta se encaixa. Ler a idade e decidir a
    categoria conforme a regra:
    ▪Infantil A – 5 a 7 anos
    ▪Infantil B – 8 a 10 anos
    ▪Juvenil A – 11 a 13 anos
    ▪Juvenil B – 14 a 17 anos
    ▪Sênior – 18 anos ou mais
*/

int main() {

    int idade;

    printf("Insira sua idade:");
    scanf("%d", &idade);

    if(idade <= 0) {
        printf("Idade incorreta");
    }
    else if(idade >= 5 && idade <= 7){
        printf("Infantil A");

    }
    else if(idade >= 8 && idade <= 10){
        printf("Infantil B");

    }
    else if(idade >= 11 &&  idade <= 13){
        printf("Juvenil A");

    }
    else if(idade >= 14 && idade <= 17){
        printf("Juvenil B");

    }
    else if(idade >= 18){
        printf("Senior");

    }
    else
        printf("Idade insuficiente para participar.");


    return 0;
}