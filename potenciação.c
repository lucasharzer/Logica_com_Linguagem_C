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

    printf("Digite o número para calcular a potênciação: ");
    scanf("%d", &n);

    printf("\n*Exemplo de função por REFERÊNCIA*");
    printf("\n*-----------------------------------*");
    printf("\nA potência de %d é igual a %d", n, pot(n));

    return 0;
}
