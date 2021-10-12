#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int vetor[5] = {02, 14, 46, 63, 76};
int limite = 5;

bool buscaBinaria(int * vetor, int limitex, int chave)
{
    int low, high, mid;
    low = 0; high = limitex - 1;

    while (low <= high)
        { 
            // inicio do la�o de repeti��o
            mid = (low + high) / 2;
            if (chave < vetor[mid]) high = mid -1;
            else if (chave > vetor[mid]) low = mid + 1;
            else return true;
        } 
        // fim do la�o de repeti��o
        return false;
}

// inicio do programa principal (main)

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int elemento;

    printf("\nInforme um n�mero: ");
    scanf("%d", &elemento);

    if (buscaBinaria(vetor, limite, elemento))
        {
            printf("\nO elemento %d foi encontrado no vetor", elemento);
        }
        else
            {
                printf("\nO elemento %d N�O foi encontrado no vetor", elemento);
            }
            return 0;
}