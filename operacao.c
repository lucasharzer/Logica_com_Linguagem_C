#include <stdio.h>
#include <locale.h>

int operaValores(char operacao, int valor1, int valor2)
{
    int resultado;

    if(operacao == 'A')
        {
            resultado = valor1 + valor2;
        }
        else
            {
                resultado = valor1 * valor2;
            }
    return resultado;
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("======================\n");
    printf(" Operação Condicional \n");
    printf("======================\n");

    int operacao = operaValores('M', 2, 4);
    printf("\nO resultado da operação %d", operacao);
    return 0;
}