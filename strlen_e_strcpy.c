#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char nome[15];
    strcpy(nome, "Fulano de Tal");  
    // strcpy(string_destino, string_origem);
    // note que a string de destino � nome
    // a string de origem � "Fulano de Tal"

    printf("Exemplo de c�pia de string");
    printf("\n---------------------------");
    printf("\nNome = %s", nome);

    printf("\nO tamanho da string 'nome' � igaul a %li", strlen(nome));

    return 0;
}