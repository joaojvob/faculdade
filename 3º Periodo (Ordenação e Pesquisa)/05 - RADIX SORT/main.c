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

void retornaMaiorNumero(int *vetor, int tamanho, int maior)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
}

void radixSort(int *vetor, int tamanho)
{
    int *contador;
    int i, lsd;
    int maior = vetor[0];
    int expoente = 1;

    contador = (int *)calloc(tamanho, sizeof(int));

    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    while (maior / expoente > 0)
    {
        int balde[10] = {0};

        for (i = 0; i < tamanho; i++)
        {
            lsd = (vetor[i] / expoente) % 10;
            balde[lsd]++;
        }

        for (i = 1; i < 10; i++)
        {
            balde[i] += balde[i - 1];
        }

        for (i = tamanho - 1; i >= 0; i--)
        {
            contador[--balde[(vetor[i] / expoente) % 10]] = vetor[i];
        }

        for (i = 0; i < tamanho; i++)
        {
            vetor[i] = contador[i];
        }

        expoente *= 10;
    }

    free(contador);
}

int main(void)
{
    int tamanho = 1000;
    int vetor[tamanho];

    system("cls");

    preencheVetor(vetor, tamanho);

    //printf("\n\n Vetor Desordenado: \n\n");

    exibirVetor(vetor, tamanho);

    radixSort(vetor, tamanho);

    printf("\n\n Vetor Ordenado: \n\n");

    //  exibirVetor(vetor, tamanho);

    return 0;
}