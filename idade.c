#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // ij = idade de jovem; mi = meia idade; ii = idade de idoso;
    int ij, mi, ii;
    ij = 24, mi = 45, ii = 60;

    // idade a ser testada:
    int idade = 45;
    printf("Para a idade de %d anos: \n", idade);

    // condições:
    if (idade >= ii)
        {
            printf("A idade informada é de uma pessoa idosa.");
        }
        else
            {
                if ( (idade >= mi) && (idade < ii) )
                    {
                        printf("A idade informada é de uma pessoa de meia-idade.");
                    }
                    else
                        {
                            if ( (idade >= ij) && (idade < mi))
                                {
                                    printf("A idade informada é de uma pessoa adulta.");
                                }
                                else
                                    {
                                        printf("A idade informada é de uma pessoa jovem.");
                                    }
                        }
            }
            return 0;
}