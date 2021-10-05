#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool verificaPar(int numero)
{
    if (numero % 2 == 0)
        {
            return true;
        }
        else
            {
                return false;
            }
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int numeroEntrada;

    printf("-----------------------------");
    printf("\nVerificar se o número é PAR");
    printf("\n----------------------------");

    printf("\nDigite o número a ser avaliado: ");
    scanf("%d", &numeroEntrada);
    printf("\nVerificar PAR ou ÍMPAR: o número %d", numeroEntrada);
    if (verificaPar(numeroEntrada))
        {
            printf("\nSim, o número %d é PAR", numeroEntrada);
        }
        else
            {
                printf("\nNão, o número %d é ÍMPAR", numeroEntrada);
            }

    return 0;
}