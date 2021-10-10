#include <stdio.h>
#include <locale.h>

void imprimeValores(int valores[]) // MATRIZ sem dimens�o
{
    for (int controle = 0; controle < 5; controle++)
        {
            printf("\nValor da ocorr�ncia %d = %d", controle, valores[controle]);
        }
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("\nExemplo par�metro declarado como MATRIZ");
    printf("\n-------------------------------------");

    int valoresOriginais[5] = {501, 402, 303, 204, 105};
    imprimeValores(valoresOriginais);

    return 0;
}
