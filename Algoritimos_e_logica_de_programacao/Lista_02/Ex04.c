#include <stdio.h>

/*
    04. A prefeitura de uma cidade resolveu criar uma linha de crédito
        aos seus servidores. A regra é que a prestação não pode
        ultrapassar 30% do salário bruto. Faça um programa que
        recebe o valor do salário bruto e o valor da prestação e indique
        se é ou não possível o empréstimo.
*/

int main() {

    float SalBruto;
    float ValorP;
    float emprestimo;
    float NumParcela;
    float taxa;

    printf("Insira o Salario:");
    scanf("%f", &SalBruto);

    printf("Insira o valor do emprestimo:");
    scanf("%f", &emprestimo);

    printf("Insira o numero de parcela(s):");
    scanf("%f", &NumParcela);

    taxa = SalBruto * 0.3;
    ValorP = emprestimo / NumParcela;

    if(ValorP < taxa){
        printf("Emprestimo altorizado.");
    }
    else
        printf("Emprestimo nao altorizado");

    return 0;
}