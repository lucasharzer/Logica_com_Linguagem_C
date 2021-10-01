# include <stdio.h>
# include <stdbool.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    bool cond1, cond2;

    cond1 = true;
    cond2 = false;

    printf("Condições do código: \n");

    if (cond1) // condição cond-1
        {
            if (cond2) // condição cond-2
                {
                    printf("\nValor da cond1 = %d (bloco-2-2) \n", cond1); // bloco-2-2
                    printf("Valor da cond2 = %d (bloco-2-2) \n", cond2); // bloco-2-2
                }
            else // falso da cond-1
                {
                printf("Valor da cond1 = %d (bloco-2-1) \n", cond1); // bloco-2-1
                printf("Valor da cond2 = %d (bloco-2-1) \n", cond2); // bloco-2-1
                }
        } // ponto de encontro p2-1
        else // falso da cond-1
            {
            printf("Valor da cond1 = %d (bloco-1) \n", cond1); // bloco-1
            } // ponto de encontro p1-0
            printf("Valor da cond1 = %d (bloco-3) \n", cond1); // bloco-3
            printf("Valor da cond1 = %d (bloco-3) \n", cond1); // bloco-3
            return 0;
}