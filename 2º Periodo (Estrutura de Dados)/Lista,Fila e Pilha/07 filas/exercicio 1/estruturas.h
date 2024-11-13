#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
typedef struct driveThrough
{
    char placaDoVeiculo[100];
    char pedido[100];

    struct driveThrough *proximo;
    struct driveThrough *anterior;

} tipoPedido;

typedef struct fila
{
    tipoPedido *primeiro;
    tipoPedido *ultimo;

} tipoFila;

tipoFila *iniciaFila();

void cliente(tipoPedido *pedido);

void exibirPedido(tipoPedido *pedido);

void anotaPedido(tipoPedido *pedido);

void pedido(tipoPedido *primeiroPedido);

void insereVeiculoNaFila(tipoFila *fila);

void entregaPedido(tipoFila *fila);