#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    // entre 0 e 16: criança
    // entre 16 e 22: adolescente
    // entre 22 e 60: adulto
    // maior que 60: terceira idade

    int idade;
    printf("Entre com a idade: ");
    scanf("%d", &idade);
    printf("\nPara a idade %d, a faixa etária: \n", idade);

    // condições
    if (idade > 0 && idade <= 16)
        {
            printf("Você é uma criança!");
        }
        else
            {
                if (idade > 16 && idade <= 22)
                    {
                        printf("Você é um adolescente!");
                    }
                    else
                        {
                            if (idade > 22 && idade < 60)
                                {
                                    printf("Você é um adulto!");
                                }
                                else
                                    {
                                        printf("Você é uma pessoa da terceira idade!");
                                    }
                        }
            }
    return 0;
}