#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("----------------------------------------");
    printf("\nPrograma que mostra o tamanho de string\n");
    printf("----------------------------------------");

    printf("\nString a ser testada: 'Este é um exemplo de String'\n");

    printf("\nEspaço alocado = %ld bytes", sizeof("Este é um exemplo de String"));
    
    return 0;
}