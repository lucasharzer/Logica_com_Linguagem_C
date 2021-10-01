#include <stdio.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // Vari�veis: ano de nascimento, idade e ano atual
    int anon, idade, anoa;
    time_t data_ano;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anon);

    // C�lculo do ano atual (anoa):
    time(&data_ano);
    struct tm * data = localtime(&data_ano);
    anoa = (data->tm_year+1900);

    // C�lculo da idade (idade):
    idade = anoa - anon;
    printf("Idade = %d anos", idade);

    if (idade >= 18)
        {
        printf("\nVoc� � maior de idade, ");
        printf("J� pode ser preso!!!");
        }
        else
            {
                printf("\nVoc� � menor de idade, ");
                printf("Um dia voc� cresce!!!");
            }
    return 0;
}