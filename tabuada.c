#include <stdio.h>
#include <locale.h>

int entradaDados()
{
    int numeroEntrada;
    printf("-------------- TABUADA --------------\n");
    printf("\nInforme um número base para tabuada: ");
    scanf("%d", &numeroEntrada);
    return numeroEntrada;
}

// ----------------------------------------------------

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    int numeroDigitado = entradaDados();
    if (numeroDigitado < 1 || numeroDigitado > 10)
        {
            printf("Número informado é inválido (fora do intervalo 1-10)");
            exit(0); // termina o programa
        }
    printf("\n--------------------------------");
    printf("\nVocê selecionou a tabuada do %d", numeroDigitado);
    printf("\n--------------------------------");

    for (int contador = 1; contador < 11; contador++)
        {
            printf("\n%d x %d = %d", numeroDigitado, contador, numeroDigitado*contador);
        }
    return 0;
}