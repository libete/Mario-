#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Solicita a altura da pirâmide ao usuário
    do
    {
        height = get_int("Tamanho: ");
    }
    while (height < 1 || height > 8);

    // Desenha a pirâmide
    for (int i = 1; i <= height; i++) // Loop para as linhas
    {
        // Imprime os espaços à esquerda
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // Imprime os hashes (#)
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        // Pula para a próxima linha
        printf("\n");
    }
}
