// Cálculo de fatorial de função recursiva
#include <stdio.h>
#include <locale.h>
// Função recursiva que cálcula o fatorial de um número inteiro n
double fatorial(int entrada)
{
    double vfatorial;
    printf("\nSequência de chamadas recursivas = %d", entrada);   

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

    printf("Digite o número que deseja calcular o fatorial: ");
    scanf("%d", &numero);
    printf("\nPrograma cálculo de fatorial");
    printf("\n=----------------------------=");
    // chamada de função fatorial

    f = fatorial(numero);
    printf("\nmultiplicando os número:");
    printf("\nFatorial da %d = %.0lf", numero, f);

    return 0;
}
