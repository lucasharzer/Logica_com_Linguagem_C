// Variével Contador

#include <stdio.h>
#include <locale.h>

int contador = 100;

void funcao1AlteraContador()
{
    contador = contador + 10;
    printf("Neste momento #1, o valor do contador é %d\n",
    contador);
}

void funcao2AlteraContador()
{
    contador = contador + 40;
    printf("Neste momento #2, o valor do contador é %d\n",
    contador);
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    printf("Neste momento #0, o valor do contador é %d\n", 
    contador);

    funcao1AlteraContador();

    funcao2AlteraContador();

    contador = contador + 60;
    printf("Neste momento #3, o valor do contador é %d\n", 
    contador);
    return 0;
}