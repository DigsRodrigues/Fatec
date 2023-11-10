#include <stdio.h>

/*
   03. Crie um programa que imprima a média aritmética entre os
	números 8, 9 e 7. 
*/

int main() {

    int num1 = 8;
    int num2 = 9;
    int num3 = 7;
    int media;

    media = (num1 * num2 * num3) / 3;

    printf("A media aritimetica dos numeros %d, %d e %d eh %d", num1, num2, num3, media);

    return 0;
}