typedef enum{
    MENU,
    SOM,
    SUB,
    MUL,
    DIV,
    SAIR
} opMenu;

/**
 * @brief Limpa o terminal.
 */
void limparTela();

/**
 * @brief Entrada dos valores para as variaveis
 * @param a Envia ponteiro de 'a'
 * @param b Envia ponteiro de 'b'
 * @return Valores atribuidos para 'a' e 'b'
 */
void valores(float *a, float *b);

/**
 * @brief Executa operação de soma
 * @param a Entrada do valor 'a'
 * @param b Entrada do valor 'b'
 * @return Soma dos valores 'a' e 'b'
 */
float soma(float a, float b);

/**
 * @brief Executa operação de subtração
 * @param a Entrada do valor 'a'
 * @param b Entrada do valor 'b'
 * @return Soma dos valores 'a' e 'b'
 */
float subtracao(float a, float b);

/**
 * @brief Executa operação de multiplicação
 * @param a Entrada do valor 'a'
 * @param b Entrada do valor 'b'
 * @return Soma dos valores 'a' e 'b'
 */
float multiplicacao(float a, float b);

/**
 * @brief Executa operação de divisão
 * @param a Entrada do valor 'a'
 * @param b Entrada do valor 'b'
 * @return Soma dos valores 'a' e 'b'
 */
float divisao(float a, float b);

/**
 * @brief Executa o menu
 */
int menu();