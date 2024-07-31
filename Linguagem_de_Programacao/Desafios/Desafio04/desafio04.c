#include <stdio.h>
#include "desafio04.h"

int str_lens(char *str){

    char *inicio = str;

    while (*str != '\0'){
        str++;
    }

    return (int) (str-inicio);

}