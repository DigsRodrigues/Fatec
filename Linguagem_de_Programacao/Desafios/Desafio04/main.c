#include <stdio.h>
#include <stdlib.h>
#include "desafio04.h"

int main(){

    char string[100];

    printf("Insira uma string:");
    fgets(string, sizeof(string), stdin);

    printf("Tamanho string \n\n%s\n\n é de %d\n.", string, str_lens(string));

    return 0;
}