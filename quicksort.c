#include <stdio.h>
#include <locale.h>

int vetor[5] = {76, 63, 46, 14, 02};
int limite = 5;

void qs(int * vetor, int left, int right)
{ // inicio da fun��o "qs"
    int i, j;
    int x, y;

    i = left; j = right;
    x = vetor[(left + right) / 2];
    do
        {
        while (vetor[i] < x && i < right) i++;
        while (x < vetor[j] && j > left) j--;
        if (i <= j)
            {
            y = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = y;
            i++; j--;
            }
        }
        while (i <= j);
        if (left < j) qs(vetor, left, j);
        if (i < right) qs(vetor, i, right);
} // FIM da fun��o "qs"

//-----------------------------------------
void quick(int * vetor, int count)
{ // inicio da fun��o "quick"
    printf("\n*-----------------------------------*");
    printf("\n*Vetor original (antes da classifica��o)*");
    printf("\n*-----------------------------------*");

    for (int z = 0; z <= limite; z++)
        {
        printf("\nvetor[%d] = %d", z, vetor[z]);
        }
        qs(vetor, 0, count - 1); // chama a fun��o "qs"
} // FIM da fun��o "quick"
// -----------------------------------------
// inicio do programa (main)
// -----------------------------------------
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    quick(vetor, 5); //Chama a fun��o que inicia a ordena��o (quick)
    printf("\n*----------------------------------*");
    printf("\n*vetor Classificado QUICKSORT*");
    printf("\n*----------------------------------*");

    for (int z = 0; z < limite; z++)
        {
        printf("\nvetor[%d] = %d", z, vetor[z]);
        }
        return 0;
}