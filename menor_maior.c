#include <stdio.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // Variáveis: ano de nascimento, idade e ano atual
    int anon, idade, anoa;
    time_t data_ano;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anon);

    // Cálculo do ano atual (anoa):
    time(&data_ano);
    struct tm * data = localtime(&data_ano);
    anoa = (data->tm_year+1900);

    // Cálculo da idade (idade):
    idade = anoa - anon;
    printf("Idade = %d anos", idade);

    if (idade >= 18)
        {
        printf("\nVocê é maior de idade, ");
        printf("Já pode ser preso!!!");
        }
        else
            {
                printf("\nVocê é menor de idade, ");
                printf("Um dia você cresce!!!");
            }
    return 0;
}