#include <stdio.h>
#include <locale.h>

char menu(void)
{
    char opcaoDigitada;

    printf("\n*--------------------*");
    printf("\n*Cadastro de Clientes*");
    printf("\n*--------------------*");
    printf("\n 1 - Consulta");
    printf("\n 2 - Alteração");
    printf("\n 3 - Inclusão");
    printf("\n 4 - Exclusão");
    printf("\n 0 - Sair");
    printf("\n*--------------------*");
    printf("\n* Selecione a opção: ");
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
                printf("\nVocê escolheu Consultar.");
                break;
            case '2':
                printf("\nVocê escolheu Alteração.");
                break;
            case '3':
                printf("\nVocê escolheu Inclusão.");
                break;
            case '4':
                printf("\nVocê escolheu Exclusão.");
                break;
            case '0':
                printf("\nVocê escolheu Sair.");
                break;
            default:
                printf("\nOpção inválida!");
        }
    return 0;
}