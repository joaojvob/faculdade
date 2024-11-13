#include "estruturas.h"

tipoFila *iniciaFila()
{
    tipoFila *fila;

    fila = (tipoFila *)malloc(sizeof(tipoFila));

    fila->tamanho = 0;
    fila->codigo = 1;

    fila->primeiro = NULL;
    fila->ultimo = NULL;

    return fila;
}

void preencheItem(item *itemNovo, int codigo)
{
    itemNovo->id = codigo;

    printf("\n Informe o nome : ");
    fflush(stdin);
    fgets(itemNovo->nome, 100, stdin);
}

void exibeUmItem(item *itemTemporario)
{
    printf("\n---------------------------------------\n");
    printf("\n ID     ->    %d \n", itemTemporario->id);
    printf("\n NOME   ->    %s \n", itemTemporario->nome);
    printf("---------------------------------------\n");
}

void insereNaFila(tipoFila *fila)
{
    celula *elementoNovo;
    elementoNovo = (celula *)malloc(sizeof(celula));

    preencheItem(elementoNovo, fila->codigo);

    if (fila->primeiro == NULL)
    {

        fila->primeiro = elementoNovo;
        fila->ultimo = elementoNovo;
        elementoNovo->deTras = NULL;
        elementoNovo->daFrente = NULL;
    }
    else
    {

        elementoNovo->daFrente = fila->ultimo;
        fila->ultimo->deTras = elementoNovo;
        elementoNovo->deTras = NULL;
        fila->ultimo = elementoNovo;
    }
    fila->tamanho++;
    fila->codigo++;
}

void removeDaFila(tipoFila *fila)
{

    if (fila->primeiro == NULL)
    {
        printf("\n Lista vazia \n ");
        return;
    }
    if (fila->tamanho == 1)
    {
        free(fila->primeiro);
        fila->primeiro = NULL;
        fila->ultimo = NULL;
        fila->tamanho--;
        return;
    }
    if (fila->tamanho > 1)
    {

        celula *primeiroDaFila;
        celula *segundoDaFila;

        primeiroDaFila = fila->primeiro;
        segundoDaFila = primeiroDaFila->deTras;
        segundoDaFila = fila->primeiro->deTras;

        free(primeiroDaFila);
        segundoDaFila->daFrente = NULL;
        fila->primeiro = segundoDaFila;
        fila->tamanho--;
    }
}

void exibeFila(tipoFila *fila)
{
    if (fila->tamanho == 0 || fila->primeiro == NULL)
    {
        printf("\n Fila vazia \n ");
        return;
    }
    if (fila->tamanho == 1 || fila->primeiro == fila->ultimo)
    {

        exibeUmItem(fila->primeiro);
        return;
    }
    if (fila->tamanho > 1)
    {

        celula *itemAtual;
        itemAtual = fila->primeiro;
        while (itemAtual != NULL)
        {
            exibeUmItem(itemAtual);
            itemAtual = itemAtual->deTras;
        }
    }
}