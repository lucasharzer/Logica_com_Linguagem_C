#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int soma = 20 + 30;
    int *somaParcial = &soma;

    printf("=----------------------------------------=");
    printf("\nTeste de utilização de uso de Ponteiros");
    printf("\n=----------------------------------------=");

    printf("\nO valor da variável 'soma' = %i", soma);
    printf("\nO valor da variável 'somaParcial' = %i", *somaParcial);

    return 0;
}
