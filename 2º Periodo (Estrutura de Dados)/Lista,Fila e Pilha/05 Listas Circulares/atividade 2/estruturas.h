#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <unistd.h>

typedef struct spotfy
{
    int codigo;
    char nomeDaMusica[100];
    float duracaoDaMusica;
    int quantidadeDeVezesQueFoiTocada;

    struct spotfy *anterior;
    struct spotfy *proximo;

} tipoSpotfy;

typedef struct lista
{
    int quantidade;
    tipoSpotfy *primeiro;
    tipoSpotfy *ultimo;

} tipoLista;

tipoLista *iniciaLista();

void cadastraMusica(tipoSpotfy *musica, int codigo);

void exibeUmaMusica(tipoSpotfy *musica);

void insereNoFinalDaLista(tipoLista *lista);

void tocarMusica(tipoLista *lista);

void exibirTOP3(tipoLista *lista);
