#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float notas[4];
    float soma = 0;

    printf("------------------------------------------\n");
    printf("Exemplo de inicialização dinâmica de vetor");
    printf("\n------------------------------------------\n");

    for (int indice = 0; indice < 4; indice++)
        {
            printf("Informe a nota %d = ", indice + 1);
            scanf("%f", &notas[indice]);
        }

    for (int indice2 = 0; indice2 < 4; indice2++)
        {
            soma = soma + notas[indice2];
        }
        printf("\nA média das notas é %.2f", soma/4);
        return 0;
}