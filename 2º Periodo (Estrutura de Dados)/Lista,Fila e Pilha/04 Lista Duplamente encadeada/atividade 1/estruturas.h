#include <stdio.h>
#include <stdlib.h>

typedef struct chaDeBB
{
    char itens[100];
    int cont;
    struct chaDeBB *proximo;
    struct chaDeBB *anterior;

} tipoCha;

typedef struct lista
{
    int quantidade;
    tipoCha *primeiro;
    tipoCha *ultimo;

} tipoLista;

tipoLista *iniciaLista();

void preencheLISTA(tipoCha *evento, int quantidade);

void inserirNoInicioDaLista(tipoLista *lista);

void inserirNoFinalDaLista(tipoLista *lista);

void removeUltimoDaLista(tipoLista *lista);

void exibeListaCompleta(tipoLista *lista);
