#include<stdio.h>
#include <cs50.h>
int main (void)
{
    int altura;

    do
{


    altura = get_int ("Qual o seu número para altura (1-8):");
}

while (altura<1|| altura>8);
 printf("Você escolheu: %d\n", altura);

for (int linha=0; linha<altura; linha++)
{
    for(int bloco=0; bloco < altura-linha-1; bloco++)
{
    printf(" ");
}
for(int z=0; z<=linha; z++)
{
 printf("#");
}

      printf("\n");
}


    return 0;
}
