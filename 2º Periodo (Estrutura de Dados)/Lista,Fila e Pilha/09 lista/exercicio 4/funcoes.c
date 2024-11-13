#include "estruturas.h"

tipoPilha *iniciaPilha()
{
    tipoPilha *pilha;

    pilha = (tipoPilha *)malloc(sizeof(tipoPilha));

    pilha->base = NULL;
    pilha->topo = NULL;
    pilha->quantidade = 0;
    pilha->tempoTOTAL = 0;

    return pilha;
}

void preencheItem(tipoRDCMO *itemNovo)
{
    printf("\n Informe o título : ");
    fflush(stdin);
    fgets(itemNovo->nomeDaMusica, 100, stdin);

    printf("\n Duração da musica em minutos : ");
    fflush(stdin);
    scanf("%d", &itemNovo->tempoDaMusica);
}

void exibeItem(tipoRDCMO *item)
{
    printf("\n--------------------------------------\n");
    printf("\n Título: %s ", item->nomeDaMusica);
    printf("\n Duração da musica em minutos : %d ", item->tempoDaMusica);
    printf("\n--------------------------------------\n");
}

void insereNaPilha(tipoPilha *pilha)
{

    tipoRDCMO *itemNovo;
    itemNovo = (tipoRDCMO *)malloc(sizeof(tipoRDCMO));

    preencheItem(itemNovo);

    pilha->tempoTOTAL = pilha->tempoTOTAL + itemNovo->tempoDaMusica;

    if (pilha->quantidade == 0)
    {
        pilha->base = itemNovo;
        itemNovo->deBaixo = NULL;
    }
    else
    {
        itemNovo->deBaixo = pilha->topo;
    }
    pilha->topo = itemNovo;
    pilha->quantidade++;
}

void exibePilhaCompleta(tipoPilha *pilha)
{
    if (pilha->quantidade == 0)
    {
        printf("\n A pilha está vazia \n ");

        return;
    }
    if (pilha->quantidade == 1)
    {
        exibeItem(pilha->topo);

        return;
    }

    tipoRDCMO *auxiliar = pilha->topo;

    printf("\n Tempo total %d ", pilha->tempoTOTAL);

    while (auxiliar != NULL)
    {
        exibeItem(auxiliar);

        auxiliar = auxiliar->deBaixo;
    }
}

void removeTopoDaPilha(tipoPilha *pilha)
{

    if (pilha->quantidade == 0)
    {

        printf("\n A pilha já estava vazia \n ");

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
    tipoRDCMO *novoTopo;

    int count;

    printf("\n Quanto tempo deseja ouvir ? \n  ");
    fflush(stdin);
    scanf("%d", &count);

    if (pilha->tempoTOTAL = < count)
    {
        for (size_t i = 0; i < count; i++)
        {
            exibeItem(novoTopo);

            novoTopo = pilha->topo->deBaixo;

            free(pilha->topo);

            pilha->topo = novoTopo;
            pilha->quantidade--;
        }
    }
    pilha->tempoTOTAL = pilha->tempoTOTAL - count;
}
