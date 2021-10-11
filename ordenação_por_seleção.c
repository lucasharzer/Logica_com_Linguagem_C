#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5] = {70, 45, 56, 29, 87};   // vetor sem classifica??o
    int limite = 5;
    int exchange = 0;

    printf("---------------------------------------");
    printf("\nVetor original antes da classificação");
    printf("\n----------------------------------------");

    for (int w = 0; w < limite; w++)
        {
            printf("\nVetor[%d] = %d", w, vetor[w]);
        }

        // Aqui começa a classificação 

        for (int i = 1; i < limite; i++)
            {
                exchange = 0;
                int c = i;
                int aux = vetor[i];

                for (int j = i + 1; j < limite; j++)
                    {
                        if (vetor[j] < aux)
                            {
                                c = j;
                                aux = vetor[j];
                                exchange = 1;
                            }
                    }
                    if (exchange)
                        {
                            vetor[c] = vetor[i];
                            vetor[i] = aux;
                        }
            } 
    

    printf("\n----------------------------------------");
    printf("\nVetor classificado por SELEÇÃO");
    printf("\n----------------------------------------");

    for (int z = 0; z < limite; z++)
        {
            printf("\nVetor[%d] = %d", z, vetor[z]);
        }

    return 0;
}