#include <stdio.h>
#include <locale.h>

int pot(int entrada)
{
    entrada = entrada * entrada;
    return (entrada);
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite o n�mero para calcular a pot�ncia��o: ");
    scanf("%d", &n);

    printf("\n*Exemplo de fun��o por REFER�NCIA*");
    printf("\n*-----------------------------------*");
    printf("\nA pot�ncia de %d � igual a %d", n, pot(n));

    return 0;
}
