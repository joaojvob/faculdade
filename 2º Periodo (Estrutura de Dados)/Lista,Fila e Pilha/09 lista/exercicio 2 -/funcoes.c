#include "estruturas.h"

tipoPilha *iniciaPilha()
{
    tipoPilha *pilha;

    pilha = (tipoPilha *)malloc(sizeof(tipoPilha));

    pilha->base = NULL;
    pilha->topo = NULL;
    pilha->quantidade = 0;

    return pilha;
}

void preencheItem(tipoPrograma *itemNovo)
{
    printf("\n Informe os dados do programa : ");
    fflush(stdin);
    fgets(itemNovo->nomeDoPrograma, 100, stdin);
}

void exibeItem(tipoPrograma *item)
{
    printf("\n-------------------\n");
    printf("\n Dados : %s", item->nomeDoPrograma);
    printf("\n-------------------\n");
}

void insereNaPilha(tipoPilha *pilha)
{
    if (pilha->quantidade >= 10)
    {
        printf("\n\n pilha cheia \n\n");
        return;
    }

    tipoPrograma *vetor;
    vetor = (tipoPrograma *)malloc(10 * sizeof(tipoPrograma));

    preencheItem(vetor);
    if (pilha->quantidade == 0)
    {
        pilha->base = vetor;
        vetor->deBaixo = NULL;
    }
    else
    {
        vetor->deBaixo = pilha->topo;
    }
    pilha->topo = vetor;
    pilha->quantidade++;
}

void executarPrograma(tipoPilha *pilha)
{
    if (pilha->quantidade == 0)
    {
        printf("\n A pilha está vazia ");
        return;
    }
    if (pilha->quantidade == 1)
    {
        exibeItem(pilha->topo);
        return;
    }

    tipoPrograma *auxiliar = pilha->topo;

    exibeItem(auxiliar);
    removeTopoDaPilha(pilha);
    auxiliar = auxiliar->deBaixo;
}

void removeTopoDaPilha(tipoPilha *pilha)
{
    if (pilha->quantidade == 0)
    {
        printf("\n A pilha já estava vazia ");
        return;
    }
    if (pilha->quantidade == 1)
    {
        free(pilha->topo);
        pilha->topo = NULL;
        pilha->base = NULL;
        pilha->quantidade = 0;
        printf("\n  Pilha vazia! \n");
        return;
    }

    tipoPrograma *novoTopo;

    novoTopo = pilha->topo->deBaixo;
    free(pilha->topo);
    pilha->topo = novoTopo;
    pilha->quantidade--;
}