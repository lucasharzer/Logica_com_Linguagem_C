#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int soma = 20 + 30;
    int *somaParcial = &soma;

    printf("=----------------------------------------=");
    printf("\nTeste de utiliza��o de uso de Ponteiros");
    printf("\n=----------------------------------------=");

    printf("\nO valor da vari�vel 'soma' = %i", soma);
    printf("\nO valor da vari�vel 'somaParcial' = %i", *somaParcial);

    return 0;
}
