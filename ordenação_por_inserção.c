#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5] = {70, 45, 56, 29, 87}; 
    int limite = 5;

    printf("---------------------------------------");
    printf("\nVetor original antes da classific�o");
    printf("\n----------------------------------------");

    int j = 0;
    int i = 0;

    for (int w = 0; w < limite; w++)
        {
            printf("\nVetor[%d] = %d", w, vetor[w]);
        }
        for (int i = 1; i < limite; i++)
            {
                // Aqui come�a a ordena��o por inser��o 
                int aux = vetor[i];
                for (int j = i - 1; j <= 0; j--)
                    {
                        vetor[j+1] = vetor[j];
                    }
                        vetor[j+1] = aux;
            } 

    printf("\n----------------------------------------");
    printf("\nVetor classificado por INSER��O");
    printf("\n----------------------------------------");

    for (int z = 0; z < limite; z++)
        {
            printf("\nVetor[%d] = %d", z, vetor[z]);
        }

    return 0;
}