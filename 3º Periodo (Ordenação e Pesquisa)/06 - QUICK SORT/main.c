#include <stdlib.h>
#include <stdio.h>

void exibirVetor(int *vetor, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("\n");
}

void preencheVetor(int *vetor, int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % (tamanho * 100);
    }
}

void quickSort(int *vetor, int inicio, int fim, int ultimaPosicaoReal)
{

    if (inicio < 0 || fim < 0)
    {
        return;
    }

    if (inicio > ultimaPosicaoReal || fim > ultimaPosicaoReal)
    {
        return;
    }

    if (inicio > fim)
    {
        return;
    }

    int up = inicio;
    int down = fim;
    int pivo = vetor[up];
    int posicaoPivo = inicio;
    int auxiliar;
    char marcadorAtivo = 'd';

    if (inicio == fim)
    {
        return;
    }

    while (up != down)
    {

        if (marcadorAtivo == 'd')
        {

            if (pivo > vetor[down])
            {
                auxiliar = vetor[down];
                vetor[down] = vetor[posicaoPivo];
                vetor[posicaoPivo] = auxiliar;
                posicaoPivo = down;
                marcadorAtivo = 's';
                up++;
            }
            else
            {
                down--;
            }
        }

        else if (marcadorAtivo == 's')
        {
            if (pivo < vetor[up])
            {
                auxiliar = vetor[up];
                vetor[up] = vetor[posicaoPivo];
                vetor[posicaoPivo] = auxiliar;
                posicaoPivo = up;
                marcadorAtivo = 'd';
                down--;
            }
            else
            {

                up++;
            }
        }
    }

    quickSort(vetor, inicio, posicaoPivo - 1, ultimaPosicaoReal);

    quickSort(vetor, posicaoPivo + 1, fim, ultimaPosicaoReal);
}

int main(void)
{
    int tamanho = 100;
    int vetor[tamanho];

    system("cls");

    preencheVetor(vetor, tamanho);

    printf("\n\n Vetor Desordenado: \n\n");

    exibirVetor(vetor, tamanho);

    quickSort(vetor, 0, tamanho - 1, tamanho - 1);

    printf("\n\n Vetor Ordenado: \n\n");

    exibirVetor(vetor, tamanho);

    return 0;
}