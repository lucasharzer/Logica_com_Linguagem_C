#include <stdio.h>
#include <string.h>
#include <locale.h>
 
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char *str1 = "Banana2";
    char *str2 = "Banana1";
    int ret;

    printf("\nManipula��o de String: Compara��o entre 2 strings");
    printf("\nComparando str1 = %s e str2 = %s", str1, str2);
    printf("\n*-----------------------------------------------*");

    ret = strncmp(str1, str2, 8); // compara as 8 posi��es das duas strings

    if (ret > 0)
        {
        printf("\n str1 � maior!");
        }
        else if (ret < 0)
        {
            printf("\n str2 � maior!");
        }
        else
            {
            printf("\n As duas palavras s�o iguais!");
            }
            return 0;
}