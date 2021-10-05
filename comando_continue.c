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

    for (int numeroEntrada; numeroEntrada <= 10; numeroEntrada++)
        {
            if (verificaPar(numeroEntrada))
                {
                    printf("\n%d - Ok, o esperado era PAR!", numeroEntrada);
                }
                else
                    {
                        printf("\n%d - Retornou ÍMPAR", numeroEntrada);
                        printf("\n----------------------------------------------------------------------");
                        continue;
                    }
                    printf(" O dobro do número par %d é igual a %d", numeroEntrada, numeroEntrada*2);
                    printf("\n----------------------------------------------------------------------");
        }
        return 0;
}