#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura;

    do
    {
        altura = get_int("Altura (1-8): ");
    }
    while (altura < 1 || altura > 8);

    for (int linha = 0; linha < altura; linha++)
    {

        for (int espaco = 0; espaco < altura - linha - 1; espaco++)
        {
            printf(" ");
        }


        for (int z = 0; z <= linha; z++)
        {
            printf("#");
        }


        printf("  ");


        for (int z = 0; z <= linha; z++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
