#include <stdio.h>

/*
    12. Faça um programa que calcula a raiz quadrada de um número
        a ser digitado. O programa deve proteger a digitação deste
        número não aceitando números negativos.
*/

int main() {

    int num;
    char op;

    do{
        printf("Insira um valor:");
        scanf("%d", &num);

        if(num > 0){
            printf("A raiz de %d eh %d\n", num, num * num);
        }else
            printf("\nValor incorreto.\n");

        printf("Deseja continuar? (s/n):");
        scanf(" %c", &op);

    }while(op != 'n');
    
    return 0;
}