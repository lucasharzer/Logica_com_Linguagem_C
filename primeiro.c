#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("Ol� Mundo!!!\n");
    printf("Essa � a linguagem C");
    return 0;
}