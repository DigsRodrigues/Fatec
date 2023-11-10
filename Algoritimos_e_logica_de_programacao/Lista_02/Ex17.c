#include <stdio.h>
#include <math.h>

/*
    17. Pesquise a função sqrt da biblioteca math.h. Faça um programa
        que leia três variáveis (a, b,e c) e resolva uma equação do
        segundo grau.
*/
int main()
{
    double a;
    double b;
    double b2;
    double c;
    double delta;
    double x1;
    double x2;

    printf("Insira o valor de 'a':");
    scanf("%lf", &a);

    printf("Insira o valor de 'b':");
    scanf("%lf", &b);

    printf("Insira o valor de 'c':");
    scanf("%lf", &c);


    b2 = sqrt(b);
    delta = b2 - (4 * a * c);


    if(delta > 0){
        x1 = -b + sqrt(delta) / 2 * a;
        x2 = -b - sqrt(delta) / 2 * a;

    }
    else{
        printf("Raiz de Delta nao apropriada.");

    }

    printf("Delta = %.lf\nX1 = %.lf\nX2 = %.lf", delta,x1, x2);


   return 0;
}