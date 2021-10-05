#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    for (int contador = 1; contador <= 100; contador++)
        {
            printf("\nO valor do contador é %d", contador);
            if (contador == 15)
                {
                    break;
                }
        }
        return 0;
}