#include <stdio.h>
#include <locale.h>

void imprimeValores(int valores[5])
{
    for (int controle = 0; controle < 5; controle++)
        {
            printf("\nValor da ocorrência %d = %d", controle, valores[controle]);
        }
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("\nExemplo parâmetro declarado como MATRIZ");
    printf("\n-------------------------------------");

    int valoresOriginais[5] = {50, 40, 30, 20, 10};
    imprimeValores(valoresOriginais);

    return 0;
}
