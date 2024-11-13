#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

void ordenaVETOR(int *vetor)
{

    int i, j, aux;

    FILE *lerArquivo;
    FILE *copiaArquivo;

    lerArquivo = fopen("ler.txt", "r");

    for (i = 0; i < MAX; i++)
    {
        fscanf(lerArquivo, "%d\n", &vetor[i]);
    }

    copiaArquivo = fopen("arquivo_Ordenado.txt", "w+");

    for (i = 0; i < MAX; i++)
    {
        for (j = i + 1; j < MAX; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for (j = 0; j < MAX; j++)
    {
        fprintf(copiaArquivo, "%d\n", vetor[j]);
    }

    fclose(lerArquivo);
    fclose(copiaArquivo);
}

int main(void)
{

    int vetor[10001];

    ordenaVETOR(&vetor[0]);

    printf("\n\n Vetor organizado com sucesso \n\n eu espero ;-; ");

    return 0;
}
