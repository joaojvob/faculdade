#include <stdio.h>
#include <stdlib.h>

typedef struct time
{

    char nomeDoJogador[100];
    char posicaoDoJogador[100];
    int numeroDoJogador;
    int codigo;

    struct time *proximo;
    struct time *anterior;

} tipoTime;

typedef struct lista
{

    int quantidade;
    tipoTime *primeiro;
    tipoTime *ultimo;

} tipoLista;

tipoLista *iniciaLista();

void cadastraJogador(tipoTime *jogador, int codigo);

void inscreverJogador(tipoLista *lista);

void exibirTime(tipoLista *lista);

void removeItemPeloCodigo(tipoLista *lista, int codigoParametro);
