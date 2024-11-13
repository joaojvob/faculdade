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

void troca(int *x, int *y)
{
    int auxiliar;
    auxiliar = *x;
    *x = *y;
    *y = auxiliar;
}

int particionar(int *vetor, int inicio, int fim)
{
    int pivo = vetor[fim];
    int i = inicio;
    int j;

    for (j = inicio; j < fim; j++)
    {
        if (vetor[j] <= pivo)
        {
            troca(&vetor[j], &vetor[i]);
            i++;
        }
    }
    troca(&vetor[i], &vetor[fim]);
    return i;
}

void quickSort(int *vetor, int inicio, int fim)
{
    if (inicio < fim)
    {
        int pivo = particionar(vetor, inicio, fim);
        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

int main()
{
    int tamanho = 100;
    int vetor[tamanho];

    system("cls");

    preencheVetor(vetor, tamanho);

    printf("\n\n Vetor Desordenado: \n\n");

    exibirVetor(vetor, tamanho);

    quickSort(vetor, 0, tamanho - 1);

    printf("\n\n Vetor Ordenado: \n\n");

    exibirVetor(vetor, tamanho);

    return 0;
}
