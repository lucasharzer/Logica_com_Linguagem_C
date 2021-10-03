#include <stdio.h>
#include <locale.h>

int entradaDados()
{
    int numeroEntrada;
    printf("-------------- TABUADA --------------\n");
    printf("\nInforme um n�mero base para tabuada: ");
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
            printf("N�mero informado � inv�lido (fora do intervalo 1-10)");
            exit(0); // termina o programa
        }
    printf("\n--------------------------------");
    printf("\nVoc� selecionou a tabuada do %d", numeroDigitado);
    printf("\n--------------------------------");

    for (int contador = 1; contador < 11; contador++)
        {
            printf("\n%d x %d = %d", numeroDigitado, contador, numeroDigitado*contador);
        }
    return 0;
}