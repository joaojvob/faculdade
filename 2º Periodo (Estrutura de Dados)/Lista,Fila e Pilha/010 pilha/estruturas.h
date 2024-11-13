#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pilha
{
    int QuantidadeDeDiscos[7];
    int disco;

} tipoPilha;

tipoPilha *criarPilha();

void destruirPilha(tipoPilha *pilha);

void empilharDiscos(tipoPilha *pilha, int parametro);

void exibir(tipoPilha *pilha);

void terminarJogo(tipoPilha *primeiroPino, tipoPilha *segundoPino, tipoPilha *terceiroPino);

void invertePilha(tipoPilha *pilha);

void exibirPinos(tipoPilha *primeiroPino, tipoPilha *segundoPino, tipoPilha *terceiroPino);

void informarPossibilidades(tipoPilha *primeiroPino, tipoPilha *segundoPino, tipoPilha *terceiroPino);

int tamanho(tipoPilha *pilha);

int topoDaPilha(tipoPilha *pilha);

int desempilharDiscos(tipoPilha *pilha);

int inicializarPilha(tipoPilha *primeiraPino, int *discos);

int mover(tipoPilha *origem, tipoPilha *destino);

int moveDiscos(tipoPilha *primeiroPino, tipoPilha *segundoPino, tipoPilha *terceiroPino);

/////////////////////////////////////////////////////////////////////////////////////

typedef struct monge
{
    int codigo;
    char nomeDoMonge[100];
    int jogadas;

    struct monge *daFrente;
    struct monge *deTras;

} tipoJogador;

typedef struct fila
{
    int quantidade;
    int contadorDeCodigo;

    tipoJogador *primeiro;
    tipoJogador *ultimo;

} tipoFila;

tipoFila *iniciaFilaDeJogadores();

void preencheMonge(tipoJogador *itemNovo, int codigo);

void exibeUmMonge(tipoJogador *itemTemporario);

void exibeFila(tipoFila *fila);

void insereNaFilaDeJogadores(tipoFila *fila);

tipoJogador *removeDaFila(tipoFila *fila);

//////////////////////////////////////////////////////////////////////////////////////////

typedef struct pontos
{
    int pontuacao;
    struct pontos *proximo;

} tipoPontos;

typedef struct listaDePontos
{
    int quantidade;

    tipoPontos *primeiro;
    tipoPontos *ultimo;

} tipoListaDePontos;

tipoListaDePontos *iniciaListaDePontos();

int pontuacaoPositiva(tipoPontos *lista);

int pontuacaoNegativa(tipoPontos *lista);

//////////////////////////////

typedef struct listaDeJogadores
{
    int quantidade;
    int codigoAtual;

    tipoJogador *primeiro;
    tipoJogador *ultimo;

} tipoListaDeJogadores;

tipoListaDeJogadores *iniciaListaDeJogadores();

void insereNoFinalDaLista(tipoListaDeJogadores *lista, tipoJogador *itemNovo);
void exibeLista(tipoListaDeJogadores *lista);
