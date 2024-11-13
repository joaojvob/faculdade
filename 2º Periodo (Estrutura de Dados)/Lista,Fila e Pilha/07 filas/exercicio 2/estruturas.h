#include <stdio.h>
#include <stdlib.h>

typedef struct caixa
{
    char nome[100];
    char cpf[13];
    int senha;

    struct caixa *proximo;
    struct caixa *anterior;

} tipoCaixa;

typedef struct fila
{
    int senha;
    int quantidade;

    tipoCaixa *primeiro;
    tipoCaixa *ultimo;

} tipoFila;

typedef struct lista
{
    int quantidade;
    int codigo;

    tipoCaixa *primeiro;
    tipoCaixa *ultimo;
} tipoLista;

tipoFila *iniciaFila();

tipoLista *iniciaLista();

void informacoesDoCliente(tipoCaixa *clienteNovo, int senha);

void exibeUmCliente(tipoCaixa *itemTemporario);

void insereNaFila(tipoFila *fila);

void exibeFila(tipoFila *fila);

tipoCaixa *removeDaFila(tipoFila *fila);

void atendeCliente(tipoLista *lista, tipoCaixa *itemNovo);

void exibeLista(tipoLista *lista);

int vazia(tipoLista *LISTA);

void excluirLista(tipoLista *lista);
