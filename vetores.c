#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float notas[4] = {4.5, 5.0, 4.0, 6.0};
    float soma = 0;

    for (int indice; indice < 4; indice++)
        {
            soma = soma + notas[indice];
        }
        printf("\nA média das notas é %.2f", soma/4);
        return 0;
}