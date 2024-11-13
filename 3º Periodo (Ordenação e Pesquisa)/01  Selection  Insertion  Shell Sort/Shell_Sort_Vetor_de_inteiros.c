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
    printf("\n\n ");
    for (i = 0; i < tamanho; i++)
    {
        printf(" %dº  ->   %d ", i + 1, vetor[i]);
        printf("\n");
    }
}

void shellSort(int *vetor, int tamanho)
{
    clock_t tempo;
    fflush(stdin);
    tempo = clock();

    int i, j;
    int aux;
    int h = 1;
    int cont = 0;

    while (h > tamanho)
    {
        h = 3 * h + 1;
    }
    while (h > 0)
    {
        for (i = 0; i < tamanho; i++)
        {
            aux = vetor[i];
            j = i;
            cont++;
            while (j > h - 1 && aux <= vetor[j - h])
            {
                vetor[j] = vetor[j - h];
                j = j - h;
                cont++;
            }
            vetor[j] = aux;
        }
        h = h / 3;
    }
    printf("\n\n Organizando vetor \n\n");

    for (i = 0; i < 3; i++)
    {
        printf(" .");
        sleep(1);
    }

    printf("\n Tempo gasto: %g ms. \n ", (clock() - tempo) / (double)CLOCKS_PER_SEC);
    printf("\n Quantidade de comparaçoes : %d ", cont);
    getchar();
}
int main()
{
    int tamanho = 150;
    int vetor[tamanho];

    preencheVetor(vetor, tamanho);

    printf("\n\n VETOR DESORGANIZADO \n");

    exibeVetor(vetor, tamanho);

    printf("\n\n VETOR ORGANIZADO \n ");

    shellSort(vetor, tamanho);

    exibeVetor(vetor, tamanho);
    return 0;
}
