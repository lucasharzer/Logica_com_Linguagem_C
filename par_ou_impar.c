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
    printf("\nVerificar se o n�mero � PAR");
    printf("\n----------------------------");

    printf("\nDigite o n�mero a ser avaliado: ");
    scanf("%d", &numeroEntrada);
    printf("\nVerificar PAR ou �MPAR: o n�mero %d", numeroEntrada);
    if (verificaPar(numeroEntrada))
        {
            printf("\nSim, o n�mero %d � PAR", numeroEntrada);
        }
        else
            {
                printf("\nN�o, o n�mero %d � �MPAR", numeroEntrada);
            }

    return 0;
}