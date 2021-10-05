#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    printf("Exemplo de estrutura de repetição Do-While");
    printf("\n*--------------------------------------*");

    int contador = 0;

    do
        {
            contador++;
            printf("\nO valor do contador é = %d", contador);
        }
        while (contador < 10);
        printf("\n*--------------------------------------*");
        printf("\nO valor do contador na saída do laço = %d", contador);

        return 0;
        // return é o comando de desvio, porque este faz com que a execução retorne (salte de volta) ao ponto onde a chamada da função foi feita.
}