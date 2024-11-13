#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TesteTamanho 1000 //519255 valor maximo que eu consegui no meu computador 

/*Desenvolver método de ordenação Merge Sort capaz de ordenar o arquivo 800000_aleatorio.txt.

Ao final seu programa deve criar um arquivo e preenche-lo com os valores ordenados*/

void lerArquivo(int *vetor, int tamanho)
{
    int i;

    FILE *lerArquivo;
    lerArquivo = fopen("800000_aleatorio.txt", "r");

    for (i = 0; i < tamanho; i++)
    {
        fscanf(lerArquivo, "%d\n", &vetor[i]);
    }
    fclose(lerArquivo);
}

void mergeSort(int *vetor, int inicio, int fim)
{
    FILE *imprimeNoArquivo;

    int metade;
    int tamAux;
    int posAux;
    int *vetAux;
    int i, j;

    if (inicio == fim)
    {
        return;
    }

    metade = (inicio + fim) / 2;

    mergeSort(vetor, inicio, metade);

    mergeSort(vetor, metade + 1, fim);

    tamAux = fim - inicio + 1;

    vetAux = (int *)malloc(tamAux * sizeof(int));

    posAux = 0;
    i = inicio;
    j = metade + 1;

    while (posAux < tamAux)
    {

        if (j > fim)
        {
            vetAux[posAux] = vetor[i];
            i++;
            posAux++;
            continue;
        }

        if (i > metade)
        {
            vetAux[posAux] = vetor[j];
            j++;
            posAux++;
            continue;
        }

        if (vetor[i] < vetor[j])
        {
            vetAux[posAux] = vetor[i];
            posAux++;
            i++;
        }
        else
        {
            vetAux[posAux] = vetor[j];
            posAux++;
            j++;
        }
    }
    posAux = 0;
    i = inicio;
    for (posAux = 0; posAux < tamAux; posAux++)
    {
        vetor[i] = vetAux[posAux];
        i++;
    }

    imprimeNoArquivo = fopen("teste.txt", "w+");

    for (i = 0; i < TesteTamanho; i++)
    {
        fprintf(imprimeNoArquivo, "%d \n", vetor[i]);
    }

    fclose(imprimeNoArquivo);
    free(vetAux);
}

void exibeVetor(int *vetor, int tamanho)
{
    int i;
    printf("\n\n");
    for (i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("\n\n");
}
int main(void)
{
    clock_t inicio;
    inicio = clock();

    int tamanho = TesteTamanho;
    int vetor[tamanho];
    int i;

    lerArquivo(vetor, tamanho);
    mergeSort(vetor, 0, tamanho - 1);
    // exibeVetor(vetor, tamanho);
    printf("\n teste");

    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\n Tempo gasto lendo um arquivo .txt, ordenando o arquivo .txt, escrevendo em outro arquivo .txt : %f ms. \n ", tempo);

    return 0;
}
