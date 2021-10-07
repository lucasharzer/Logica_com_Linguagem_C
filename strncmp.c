#include <stdio.h>
#include <string.h>
#include <locale.h>
 
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char *str1 = "Banana2";
    char *str2 = "Banana1";
    int ret;

    printf("\nManipulação de String: Comparação entre 2 strings");
    printf("\nComparando str1 = %s e str2 = %s", str1, str2);
    printf("\n*-----------------------------------------------*");

    ret = strncmp(str1, str2, 8); // compara as 8 posições das duas strings

    if (ret > 0)
        {
        printf("\n str1 é maior!");
        }
        else if (ret < 0)
        {
            printf("\n str2 é maior!");
        }
        else
            {
            printf("\n As duas palavras são iguais!");
            }
            return 0;
}