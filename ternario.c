#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    // utilizando o operador tern�rio:
    printf("Explica��o: se o valor for maior que 100, recebe 200 e se o valor for menor ou igual a 100, recebe 300.\n");

    // valor:
    int valor;
    printf("\nDigite o valor: ");
    scanf("%d", &valor);
    printf("\nPara o valor %d: ", valor);

    int resultado = valor > 100? 200: 300;

    // novo valor:
    printf("\nO valor do resultado �: %d\n", resultado);
    return 0;
}