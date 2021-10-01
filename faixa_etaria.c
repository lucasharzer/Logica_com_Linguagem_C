#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    // entre 0 e 16: crian�a
    // entre 16 e 22: adolescente
    // entre 22 e 60: adulto
    // maior que 60: terceira idade

    int idade;
    printf("Entre com a idade: ");
    scanf("%d", &idade);
    printf("\nPara a idade %d, a faixa et�ria: \n", idade);

    // condi��es
    if (idade > 0 && idade <= 16)
        {
            printf("Voc� � uma crian�a!");
        }
        else
            {
                if (idade > 16 && idade <= 22)
                    {
                        printf("Voc� � um adolescente!");
                    }
                    else
                        {
                            if (idade > 22 && idade < 60)
                                {
                                    printf("Voc� � um adulto!");
                                }
                                else
                                    {
                                        printf("Voc� � uma pessoa da terceira idade!");
                                    }
                        }
            }
    return 0;
}