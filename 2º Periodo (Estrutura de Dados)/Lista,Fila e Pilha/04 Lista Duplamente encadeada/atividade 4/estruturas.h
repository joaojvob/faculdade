#include <stdio.h>
#include <stdlib.h>

typedef struct instagram
{

    char enderecoDaImagem[100];
    int kbytes;
    int codigo;
    int vizualizacoes;

    struct instagram *anterior;
    struct instagram *proximo;

} tipoInsta;

typedef struct lista
{
    int quantidade;

    tipoInsta *primeiro;
    tipoInsta *ultimo;
} tipoLista;

tipoLista *iniciaLista();

void criarPost(tipoInsta *publicacao, int cont);

void inserirPostNaLista(tipoLista *lista);

void exibirUmStories(tipoInsta *storiesTEMP);

void exibirProximoOuAnterior(tipoLista *lista);

void removePeloCodigo(tipoLista *lista, int cont);
