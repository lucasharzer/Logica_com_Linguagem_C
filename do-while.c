#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    printf("Exemplo de estrutura de repeti��o Do-While");
    printf("\n*--------------------------------------*");

    int contador = 0;

    do
        {
            contador++;
            printf("\nO valor do contador � = %d", contador);
        }
        while (contador < 10);
        printf("\n*--------------------------------------*");
        printf("\nO valor do contador na sa�da do la�o = %d", contador);

        return 0;
        // return � o comando de desvio, porque este faz com que a execu��o retorne (salte de volta) ao ponto onde a chamada da fun��o foi feita.
}