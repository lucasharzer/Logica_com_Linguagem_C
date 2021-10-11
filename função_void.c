#include <stdio.h>

void imprimeValores(int valores[5])
{
    for (int contador = 0; contador < 6; contador++)
        {
            printf("\nValor da ocorrência %d = %d", contador, valores[contador]);
        }
}

// Um dos usos do void é declarar,
// de forma explícita, funções que não devolvem valores.
// Isso é importante, pois dá a liberdade ao programador
// de codificar uma função que atua internamente, sem a
// necessidade de devolver um valor. Por exemplo: Imagine
// que você desenvolveu uma função somente para imprimir um aviso em tela.
// A função emite o aviso e não precisa devolver ao chamador algum dado
// manipulado em seu interior.

    