#include "estruturas.h"

tipoPilha *iniciaPilha()
{
    tipoPilha *pilha;

    pilha = (tipoPilha *)malloc(sizeof(tipoPilha));

    pilha->base = NULL;

    pilha->topo = NULL;
    pilha->codigo = 0;
    pilha->quantidade = 0;

    return pilha;
}

void cadastrarPlaneta(tipoPlaneta *planetaNovo, int id)
{
    planetaNovo->codigo = id;
    printf("\n Informe o nome do planeta : ");
    fflush(stdin);
    fgets(planetaNovo->titulo, 100, stdin);
}

void exibePlaneta(tipoPlaneta *item)
{
    printf("\n-------------------\n");
    printf("\n ID    : %d ", item->codigo);
    printf("\n Título: %s ", item->titulo);
    printf("\n-------------------\n");
}

void insereNaPilha(tipoPilha *pilha)
{

    tipoPlaneta *planetaNovo;
    planetaNovo = (tipoPlaneta *)malloc(sizeof(tipoPlaneta));

    cadastrarPlaneta(planetaNovo, pilha->codigo + 1);
    if (pilha->quantidade == 0)
    {
        pilha->base = planetaNovo;
        planetaNovo->deBaixo = NULL;
    }
    else
    {
        planetaNovo->deBaixo = pilha->topo;
    }
    pilha->topo = planetaNovo;
    pilha->quantidade++;
    pilha->codigo++;
}

void exibeTopoDaPilha(tipoPilha *pilha)
{
    if (pilha->quantidade == 0)
    {
        printf("A pilha está vazia\n");
        return;
    }
    if (pilha->quantidade == 1)
    {
        exibePlaneta(pilha->topo);
        return;
    }

    tipoPlaneta *auxiliar = pilha->topo;

    exibePlaneta(auxiliar);
}

void exibePilhaCompleta(tipoPilha *pilha)
{
    if (pilha->quantidade == 0)
    {
        printf("A pilha está vazia\n");
        return;
    }
    if (pilha->quantidade == 1)
    {
        exibePlaneta(pilha->topo);
        return;
    }

    tipoPlaneta *auxiliar = pilha->topo;

    while (auxiliar != NULL)
    {
        exibePlaneta(auxiliar);
        auxiliar = auxiliar->deBaixo;
        }
    removeTopoDaPilha(pilha);
}

void removeTopoDaPilha(tipoPilha *pilha)
{
    if (pilha->quantidade == 0)
    {
        printf("A pilha já estava vazia\n");
        return;
    }
    if (pilha->quantidade == 1)
    {
        free(pilha->topo);
        pilha->topo = NULL;
        pilha->base = NULL;
        pilha->quantidade = 0;
        printf("Pilha vazia!\n");
        return;
    }

    tipoPlaneta *novoTopo;

    novoTopo = pilha->topo->deBaixo;
    free(pilha->topo);
    pilha->topo = novoTopo;
    pilha->quantidade--;
}