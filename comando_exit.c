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

    printf("Digite o número para ver se é par: ");
    scanf("%d", &numeroEntrada);

    if (verificaPar(numeroEntrada))
        {
            printf("\nOk, o esperado era PAR!");
        }
        else
            {
                printf("\nRetornou ÍMPAR, vou cancelar o programa!");
                exit(1);
                // Esta função, ao ser executada, encerra a execução do programa imediatamente.
            }
        return 0;
}