#include <stdio.h>
#include <stdlib.h>
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

    printf("Digite o n�mero para ver se � par: ");
    scanf("%d", &numeroEntrada);

    if (verificaPar(numeroEntrada))
        {
            printf("\nOk, o esperado era PAR!");
        }
        else
            {
                printf("\nRetornou �MPAR, vou cancelar o programa!");
                exit(1);
                // Esta fun��o, ao ser executada, encerra a execu��o do programa imediatamente.
            }
        return 0;
}