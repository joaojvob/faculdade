#include <stdio.h>
#include <stdlib.h>

typedef struct itens
{
    int id;
    char nome[10];
} item;

typedef struct celulaFila
{
    item elemento;

    int contadorDeCodigo;

    struct celulaFila *daFrente;
    struct celulaFila *deTras;

} celula;

typedef struct fila
{
    int tamanho;
    int codigo;

    celula *primeiro;
    celula *ultimo;
} tipoFila;

tipoFila *iniciaFila();

void preencheItem(item *itemNovo, int codigo);

void exibeUmItem(item *itemTemporario);

void insereNaFila(tipoFila *fila);

void removeDaFila(tipoFila *fila);

void exibeFila(tipoFila *fila);
