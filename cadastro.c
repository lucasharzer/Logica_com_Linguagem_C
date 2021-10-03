#include <stdio.h>
#include <locale.h>

char menu(void)
{
    char opcaoDigitada;

    printf("\n*--------------------*");
    printf("\n*Cadastro de Clientes*");
    printf("\n*--------------------*");
    printf("\n 1 - Consulta");
    printf("\n 2 - Altera��o");
    printf("\n 3 - Inclus�o");
    printf("\n 4 - Exclus�o");
    printf("\n 0 - Sair");
    printf("\n*--------------------*");
    printf("\n* Selecione a op��o: ");
    opcaoDigitada = getchar();
    return opcaoDigitada;
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char opcao = menu();
    switch(opcao)
        {
            case '1':
                printf("\nVoc� escolheu Consultar.");
                break;
            case '2':
                printf("\nVoc� escolheu Altera��o.");
                break;
            case '3':
                printf("\nVoc� escolheu Inclus�o.");
                break;
            case '4':
                printf("\nVoc� escolheu Exclus�o.");
                break;
            case '0':
                printf("\nVoc� escolheu Sair.");
                break;
            default:
                printf("\nOp��o inv�lida!");
        }
    return 0;
}