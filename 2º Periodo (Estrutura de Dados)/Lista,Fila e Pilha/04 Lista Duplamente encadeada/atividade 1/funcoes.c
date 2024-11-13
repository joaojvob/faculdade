#include "estruturas.h"

tipoLista *iniciaLista()
{
    tipoLista *lista;
    lista = (tipoLista *)malloc(sizeof(tipoLista));

    lista->quantidade = 0;
    lista->primeiro = NULL;
    lista->ultimo = NULL;

    return lista;
}

void preencheLISTA(tipoCha *evento, int quantidade)
{
    printf("\n\n");

    evento->cont = quantidade;

    printf("\n ITEM Nº %d ", evento->cont);

    printf("\n O que você vai levar para o chá de bebê ? \n\n -> ");
    fflush(stdin);
    fgets(evento->itens, 100, stdin);
}

void inserirNoInicioDaLista(tipoLista *lista)
{

    tipoCha *evento;

    if (lista->quantidade == 0)
    {
        evento = (tipoCha *)malloc(sizeof(tipoCha));
        lista->primeiro = evento;
        lista->ultimo = evento;
    }
    else
    {
        evento = (tipoCha *)malloc(sizeof(tipoCha));
        lista->primeiro->proximo = evento;
        lista->primeiro = evento;
    }

    evento->proximo = NULL;
    lista->quantidade++;
    preencheLISTA(evento, lista->quantidade);
}

void inserirNoFinalDaLista(tipoLista *lista)
{

    tipoCha *evento;

    if (lista->quantidade == 0)
    {
        evento = (tipoCha *)malloc(sizeof(tipoCha));
        lista->primeiro = evento;
        lista->ultimo = evento;
    }
    else
    {
        evento = (tipoCha *)malloc(sizeof(tipoCha));
        lista->ultimo->proximo = evento;
        lista->ultimo = evento;
    }
    evento->proximo = NULL;
    lista->quantidade++;
    preencheLISTA(evento, lista->quantidade);
}

void removeUltimoDaLista(tipoLista *lista)
{

    if (lista->quantidade == 0)
    {
        printf("\n\n <-> Não a itens para se remover <-> \n\n");
        return;
    }
    else
    {
        tipoCha *enderecoDoUltimo = lista->ultimo;

        printf("\n\n Removendo o item -> %s ", enderecoDoUltimo->itens);

        lista->ultimo = lista->ultimo->proximo;
        free(enderecoDoUltimo);
        lista->quantidade--;
    }
}

void exibeListaCompleta(tipoLista *lista)
{

    if (lista->quantidade == 0)
    {
        printf("\n\n <-> Lista de itens vazia <-> \n\n");
        return;
    }
    else
    {
        tipoCha *eventoAux;
        eventoAux = lista->primeiro;

        while (eventoAux != NULL)
        {
            printf("\n________________________________\n");
            printf("\n ITEM Nº %d ", eventoAux->cont);

            printf("\n\n -> %s \n\n  ", eventoAux->itens);
            printf("\n________________________________\n");
            eventoAux = eventoAux->proximo;
        }
    }
}