#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct arquivo
{
    char nome[100];
    char extensao[5];
    int kbytes;
    int codigo;

    struct arquivo *anterior;
    struct arquivo *proximo;

} tipoArquivo;

typedef struct lista
{
    int quantidade;

    tipoArquivo *primeiro;
    tipoArquivo *ultimo;

} tipoLista;

tipoLista *iniciaLista();

void cria_Arquivo(tipoArquivo *novoArquivo, int codigo);

void inserirNoFinalDaLista(tipoLista *lista);

void exibirUmArquivo(tipoArquivo *arquivoTEMP);

void exibirLista(tipoLista *lista);

void buscarPeloCodigo(tipoLista *lista, int codigo);
