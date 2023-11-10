#include <stdio.h>

int receita(int Idade, float Peso, int Mg, int Gotas);       // Trazendo a função receita. 

int main(){

    float Peso;
    int Idade;
    int Mg;
    int Gotas;

    printf("Insira a idade do paciente:");                   // Entrada de dados (Idade e Peso).
    scanf("%d", &Idade);

    printf("Insira o peso do paciente:");                    
    scanf("%f", &Peso);


    if(Idade >= 12 && Peso > 0){                             // Verificação se idade >= 12, e Peso > 0.

        if(Peso >= 60){                                      
            Mg = 1000;
        }
        else if(Peso < 60){                                  
            Mg = 875;
        }
        else
                printf("Valor invalido.");                   // Imprimindo erro para Idade e Peso abaixo de 0.

     receita(Idade, Peso, Mg, Gotas);                        // Invocando resultados da função receita.

    }
    else if(Idade > 0 && Idade < 12 && Peso > 0){            // Verificação se idade < 12, e peso > 0.
           
        if(Peso >= 5 && Peso <= 9){                      
            Mg = 125;
        }
        else if(Peso > 9 && Peso <= 16){                 
            Mg = 250;
        }
        else if(Peso > 16 && Peso <= 24){                
            Mg = 375;
        }
        else if(Peso > 24 && Peso <= 30){                
            Mg = 500;
        }
        else if(Peso >30){                               
            Mg = 750;
        }

     receita(Idade, Peso, Mg, Gotas);                        // Invocando resultados da função receita.
    
    }
    else
        printf("Valor incorreto.\n");                        // Imprimindo erro com Idade e Peso abaixo de 0.


    return 0;
}

int receita(int Idade, float Peso, int Mg, int Gotas){       // Função para imprimir receita (Idade, Peso, Mg, Gotas).

    Gotas = Mg / 25;                                         // Calculo para Gotas, 1 gota = 25mg

    putchar('\n');
    printf("Idade:\t%d anos\n", Idade);
    printf("Peso: \t%.2fkg\n", Peso);
    printf("Mg: \t%dmg\n", Mg);
    printf("Gotas: \t%d gotas\n", Gotas);

    return 0;
}
