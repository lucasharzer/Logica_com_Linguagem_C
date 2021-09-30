#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("Olá Mundo!!!\n");
    printf("Essa é a linguagem C");
    return 0;
}