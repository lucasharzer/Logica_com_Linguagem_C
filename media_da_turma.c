#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

float nota1, nota2, nota3, nota4;
// variáveis globais

int entradaNotas()
{
    printf("\n-----------------------------\n");
    for (int contador = 1; contador <= 4; contador++)
        {
            printf("Informe a nota %d = ", contador);
            switch (contador)
                {
                    case 1:
                        scanf("%f", &nota1);
                        break;
                    case 2:
                        scanf("%f", &nota2);
                        break;
                    case 3:
                        scanf("%f", &nota3);
                        break;
                    case 4:
                        scanf("%f", &nota4);
                        break;
                }
        }
}

bool entradaOpcao()
{
    int opcaoDigitada;
    int digitacaoOk = 1;

    printf("\nVocê deseja calcular outra média? (1-Sim/0-Não)");
    while (digitacaoOk == 1)
        {
            scanf("%d", &opcaoDigitada);
            if (opcaoDigitada == 1 || opcaoDigitada == 0)
                {
                    digitacaoOk = 0;
                }
                else
                    {
                        digitacaoOk = 1;
                        printf("Opção Inválida (Deve ser 1-Sim/0-Não)");
                    }
        }
    if (opcaoDigitada == 1)
        {
            return true;
        }
        else
            {
                return false;
            }
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");    

    float media, mediaTurma;
    float acumulaMedia = 0;
    bool continuaProcessamento = true;
    int qtdAlunos = 0;

    while (continuaProcessamento)
        {
            entradaNotas();
            media = (nota1 + nota2 + nota3 + nota4)/4;
            printf("\n-----------------------------");
            acumulaMedia += media;
            qtdAlunos += 1;

            if (media >= 7.0)
                {
                    printf("\nEste aluno foi APROVAOD com média = %.2f", media);
                }
                else
                    {
                        printf("\nEste aluno foi REPROVADO com média = %.2f", media);
                    }
                continuaProcessamento = entradaOpcao();
        }
    mediaTurma = acumulaMedia/qtdAlunos;
    printf("\n--------------------------------");
    printf("\nA média da turma foi = %.2f", mediaTurma);
    printf("\n--------------------------------\n");
    printf("\nObrigado por usar o sistema!");

    return 0;
}

