#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    // se o valor for menor que 0, o novo valor vale 0
    // sen�o o novo valor vale o valor inicial.

    int valor, novo_valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    //        IF
    // if (valor < 0)
    //     {
    //         novo_valor = 0;
    //     }
    //     else
    //         {
    //             novo_valor = valor;
    //         }

    //      TERN�RIO
    novo_valor = (valor < 0)? 0: valor;
    
    printf("\nResolvido com operador tern�rio:");
    printf("\n-------------------------------\n");
    printf("O novo valor �: %d", novo_valor);
    return 0;
}