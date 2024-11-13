#include <stdio.h>
#include <stdlib.h>

typedef struct RDCMO
{
    int codigo;
    char nomeDaMusica[100];
    int tempoDaMusica;

    struct RDCMO *deBaixo;

} tipoRDCMO;

typedef struct pilha
{
    tipoRDCMO *base;
    tipoRDCMO *topo;

    int tempoTOTAL;

    int quantidade;

} tipoPilha;

tipoPilha *iniciaPilha();

void preencheItem(tipoRDCMO *itemNovo);

void exibeItem(tipoRDCMO *item);

void insereNaPilha(tipoPilha *pilha);

void exibePilhaCompleta(tipoPilha *pilha);

void removeTopoDaPilha(tipoPilha *pilha);
