#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    printf("\nExemplo de estrutura FOR");
    printf("\n------------------------");
    for (int contador = 1; contador <= 10; contador++)
        {
            printf("\nO valor do contador é %d", contador);
        }
    return 0;
}