#include <stdio.h>

int main(void)
{
    int contador = 0;
    printf("---------------");
    loop1:
    if (contador++ < 10)
        {
            printf("\nO contador = %d", contador);
            goto loop1;
        }

    return 0;
}