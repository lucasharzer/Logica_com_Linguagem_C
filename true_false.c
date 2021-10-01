#include <stdio.h>

int main()
{
    int p, q;

    printf("Informe os valores de 'p' e 'q' (Verdadeiro: 1 ou Falso: 0)");
    printf("\nPrimeiro Valor (p): "); 
    scanf("%d", &p);
    printf("Segundo Valor (q): ");
    scanf("%d", &q);

    printf("\n-----------------");
    printf("\n(p)%d AND (q)%d resulta em %d", p, q, p && q);
    printf("\n(p)%d OR (q)%d resulta em %d", p, q, p || q);
    printf("\nNOT (p)%d resulta em %d", p, !p);
    printf("\nNOT (q)%d resulta em %d", q, !q);
    printf("\n-----------------");

    return 0;
}