#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    // vetor para receber as temperaturas digitadas
    // cada linha da matriz representa o mês
    float amostraTemperaturaTrimestral[3][4] = 
    {  {25.4, 27.09, 28.9, 29.5},
        {21.8, 21.5, 22.9, 20.9},
        {18.8, 20.1, 17.7, 19} };

    printf("Exemplo de acesso a matriz bidimensional");
    printf("\n*-------------------------------------*");

    // laço de repetição para controlar as 3 LINHAS da matriz
    for (int indice_i = 0; indice_i < 3; indice_i++)
        {
            printf("\n----- Temperatura do Mês: %d -----", indice_i + 1);
            // laço de repetição para controlar as 4 COLUNAS da matriz
            for (int indice_j = 0; indice_j < 4; indice_j++)
                {
                    printf("\n Temperatura %d = %.2f", indice_j + 1, amostraTemperaturaTrimestral[indice_i][indice_j]);
                }
        }
        return 0;
}