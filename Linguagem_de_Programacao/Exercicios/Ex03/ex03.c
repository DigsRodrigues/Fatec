#include <stdio.h>
#include "ex03.h"

void desempenho(float nota){

    if(nota < 40){
        printf("Reprovado.\n");

    }else if(nota >= 40 && nota < 60){
        printf("Suficiente.\n");

    }else if(nota >= 60 && nota < 80){
        printf("Bom.\n");

    }else if(nota >= 80 && nota < 90){
        printf("Muito Bom.\n");
        
    }else if(nota >= 90 && nota <= 100){
        printf("Excelente.\n");
    }
}