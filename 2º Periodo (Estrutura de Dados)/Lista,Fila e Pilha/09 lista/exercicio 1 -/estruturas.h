#include <stdio.h>
#include <stdlib.h>

typedef struct planeta
{
    int codigo;
    char titulo[100];
    char autor[100];

    struct planeta *deBaixo;

} tipoPlaneta;

typedef struct pilha
{
    int quantidade;
    int codigo;

    tipoPlaneta *base;

    tipoPlaneta *topo;

} tipoPilha;

tipoPilha *iniciaPilha();

void cadastrarPlaneta(tipoPlaneta *planetaNovo, int id);

void exibePlaneta(tipoPlaneta *item);

void insereNaPilha(tipoPilha *pilha);

void exibeTopoDaPilha(tipoPilha *pilha);

void exibePilhaCompleta(tipoPilha *pilha);

void removeTopoDaPilha(tipoPilha *pilha);
