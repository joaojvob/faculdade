#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void preencheVetor(int *vetor, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % (tamanho * 100);
    }
}

void exibeVetor(int *vetor, int tamanho)
{
    int i;
    printf("\n");
    for (i = 0; i < tamanho; i++)
    {
        printf(" %dº  ->   %d ", i + 1, vetor[i]);
        printf("\n");
    }
}

void trocaPosicoes(int *vetor, int i, int minimo)
{
    int aux;
    aux = vetor[i];
    vetor[i] = vetor[minimo];
    vetor[minimo] = aux;
}

int menorIndice(int *vetor, int i, int tamanho)
{
    int minimo = i;
    int aux;
    for (aux = i + 1; aux <= tamanho; aux++)
    {
        if (vetor[minimo] > vetor[aux])
        {
            minimo = aux;
        }
    }
    return minimo;
}

void selectionSort(int *vetor, int tamanho)
{
    int minimo;
    int i;
    for (i = 0; i < tamanho; i++)
    {
        minimo = menorIndice(vetor, i, tamanho - 1);

        trocaPosicoes(vetor, i, minimo);
    }
}

int main()
{
    int tamanho = 100;
    int vetor[tamanho];

    preencheVetor(vetor, tamanho);

    printf("\n\n VETOR DESORGANIZADO \n");

    exibeVetor(vetor, tamanho);

    printf("\n\n VETOR ORGANIZADO \n ");

    selectionSort(vetor, tamanho);

    exibeVetor(vetor, tamanho);

    return 0;
}
