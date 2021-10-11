#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5] = {70, 45, 56, 29, 87};   // vetor sem classificação
    int limite = 5;

    printf("---------------------------------------");
    printf("\nVetor original antes da classificação");
    printf("\n----------------------------------------");

    for (int w = 0; w < limite; w++)
        {
            printf("\nVetor[%d] = %d", w, vetor[w]);
        }

        // Aqui começa a classificação por TROCA

        for (int i = 1; i < limite; i++)
            {
                for (int k = limite - 1; k >= i; k--)
                    {
                        if (vetor[k-1] > vetor[k])
                            {
                                // Nestes pontos efetuam-se as TROCAS

                                int aux = vetor[k-1];   
                                vetor[k-1] = vetor[k];
                                vetor[k] = aux;
                            }
                    }
            }   // Aqui termina a classificação por TROCA
    

    printf("\n----------------------------------------");
    printf("\nVetor classificado por TROCA");
    printf("\n----------------------------------------");

    for (int z = 0; z < limite; z++)
        {
            printf("\nVetor[%d] = %d", z, vetor[z]);
        }

    return 0;
}