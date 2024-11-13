#include <stdio.h>
#include <stdlib.h>

typedef struct programa
{
    int codigo;
    char nomeDoPrograma[100];

    struct programa *deBaixo;

} tipoPrograma;

typedef struct pilha
{
    int quantidade;

    tipoPrograma *base;
    tipoPrograma *topo;

} tipoPilha;

tipoPilha *iniciaPilha();

void preencheItem(tipoPrograma *itemNovo);

void exibeItem(tipoPrograma *item);

void insereNaPilha(tipoPilha *pilha);

void executarPrograma(tipoPilha *pilha);

void removeTopoDaPilha(tipoPilha *pilha);