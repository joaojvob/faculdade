#include <stdlib.h>
#include <stdio.h>

int matriz[9][9];

int gera()
{
    for (size_t l = 0; l < 9; l++)
    {
        for (size_t c = 0; c < 9; c++)
        {
            matriz[l][c] = rand() % 8 + 0;
        }
    }
}

void exibe()
{
    int l, c;

    for (l = 0; l < 9; l++)
    {
        for (c = 0; c < 9; c++)
        {
            printf(" %d", matriz[l][c]);
            if (c % 3 == 2)
            {
                printf("  ");
            }
        }
        printf("\n");
        if (l % 3 == 2)
        {
            printf("\n");
        }
    }
}

int fazVerificacao(int linha, int coluna, int n)
{
    int lin, col;
    int l, c;
    if (matriz[linha][coluna] == n)
    {
        return 1;
    }
    if (matriz[linha][coluna] != 0)
    {
        return 0;
    }

    for (c = 0; c < 9; c++)
    {
        if (matriz[linha][c] == n)
        {
            return 0;
        }
    }

    for (l = 0; l < 9; l++)
    {
        if (matriz[l][coluna] == n)
        {
            return 0;
        }
    }

    lin = linha / 3;
    col = coluna / 3;

    for (l = lin * 3; l < (lin + 1) * 3; l++)
    {
        for (c = col * 3; c < (col + 1) * 3; c++)
        {
            if (matriz[l][c] == n)
            {
                return 0;
            }
        }
    }
}

void testaJogo(int lin, int col)
{

    int n, t;

    if (lin == 9)
    {
        exibe();
        printf("\n JOGO VALIDO \n");
        printf("\n Aperte qualquer tecla para continuar ... \n");
        getchar();
        exit(1);
    }

    else
    {

        for (n = 1; n <= 9; n++)
        {
            if (fazVerificacao(lin, col, n))
            {
                t = matriz[lin][col];
                matriz[lin][col] = n;
                if (col == 8)
                {
                    testaJogo(lin + 1, 0);
                }
                else
                {
                    testaJogo(lin, col + 1);
                }
                matriz[lin][col] = t;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    exibe();
    testaJogo(0, 0);
    //
    return 0;
}
