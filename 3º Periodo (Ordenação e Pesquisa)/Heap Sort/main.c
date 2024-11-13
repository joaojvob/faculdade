#include <stdlib.h>
#include <stdio.h>

void exibirVetor(int *vetor, int tamanho)
{
    int i;
    printf("\n\n");
    for (i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("\n\n");
}

void preencheVetor(int *vetor, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % (tamanho * 10);
    }
}

void heapSort(int *vetor, int tamanho)
{

    int final = tamanho - 1;

    int pai, filho;

    int auxiliar;

    while (final >= 0)
    {
        for (filho = final; filho > 0; filho--)
        {

            if (filho % 2 == 0)
            {
                pai = (filho - 2) / 2;
            }
            else
            {
                pai = (filho - 1) / 2;
            }
            if (vetor[filho] > vetor[pai])
            {
                auxiliar = vetor[filho];
                vetor[filho] = vetor[pai];
                vetor[pai] = auxiliar;
            }
        }
        auxiliar = vetor[0];
        vetor[0] = vetor[final];
        vetor[final] = auxiliar;

        final--;
    }
}
int main(int argc, char const *argv[])
{
    int tamanho = 100;
    int vetor[tamanho];

    preencheVetor(vetor, tamanho);
    printf("\n Vetor antes de ser ordenado \n ");
    exibirVetor(vetor, tamanho);
    heapSort(vetor, tamanho);
    printf("\n Vetor depois de ser ordenado \n ");
    exibirVetor(vetor, tamanho);

    return 0;
}
