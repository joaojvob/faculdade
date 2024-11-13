#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define T 25

void exibirVetor(char vetor[][T], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf(" %s ", vetor[i]);
    }
    printf("\n");
}

void insertionSort(char vetor[][T], int tamanho)
{
    int i;
    char elemento[T];
    int aux;

    for (i = 1; i < tamanho; i++)
    {

        strcpy(elemento, vetor[i]);

        aux = i - 1;

        while (aux >= 0 && (strcmp(vetor[aux], elemento) > 0))
        {
            strcpy(vetor[aux + 1], vetor[aux]);

            aux = aux - 1;
        }

        strcpy(vetor[aux + 1], elemento);
    }
}

int main()
{
    char vetor[][T] = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "v", "b", "n", "m"};

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("\n Vetor desorganizado \n\n ");

    exibirVetor(vetor, tamanho);

    insertionSort(vetor, tamanho);

    printf("\n Vetor organizado \n\n ");

    exibirVetor(vetor, tamanho);

    return 0;
}