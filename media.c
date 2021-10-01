/*---------------------------------------------*
*C�DIGO: Calculo da m�dia
*Verifica a situa��o final do aluno a partir de
*suas quatro notas obtidas no per�odo. 
*----------------------------------------------*/

#include <stdio.h>
#include <locale.h>

float entradaDados(int numeroEntrada)
{
    float nota;
    printf("- Entre com a nota # %d: ", numeroEntrada);
    scanf("%f", &nota);
    return nota;
}
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("\nC�lculo da M�dia do aluno:\n");
    printf("\n");

    float n1, n2, n3, n4, media;

    // definindo as notas:
    n1 = entradaDados(1);
    n2 = entradaDados(2);
    n3 = entradaDados(3);
    n4 = entradaDados(4);

    // calculo da media:
    media = (n1 + n2 + n3 + n4)/4;
    printf("\nM�dia do aluno: %f\nSitua��o -> ",media);

    //condi��o:
    if (media >= 7)
        {
        printf("Aluno APROVADO.");
        }
        else
        {
            printf("Aluno REPROVADO.");
        }
        return 0;
}

/* observa��o:
%s -> para "string"
%d -> para n�meros inteiros
%f -> para ponto flutuante
*/