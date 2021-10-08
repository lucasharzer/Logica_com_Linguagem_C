// C�lculo de fatorial de fun��o recursiva
#include <stdio.h>
#include <locale.h>
// Fun��o recursiva que c�lcula o fatorial de um n�mero inteiro n
double fatorial(int entrada)
{
    double vfatorial;
    printf("\nSequ�ncia de chamadas recursivas = %d", entrada);   

    if (entrada <= 1)
        {
            // Caso base: fatorial de n <= 1 retorna 1
            return (1);
        }
        else
            {
                // chamada rec8ursiva
                vfatorial = entrada * fatorial(entrada - 1);
                return(vfatorial);
            }
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    double f;

    printf("Digite o n�mero que deseja calcular o fatorial: ");
    scanf("%d", &numero);
    printf("\nPrograma c�lculo de fatorial");
    printf("\n=----------------------------=");
    // chamada de fun��o fatorial

    f = fatorial(numero);
    printf("\nmultiplicando os n�mero:");
    printf("\nFatorial da %d = %.0lf", numero, f);

    return 0;
}
