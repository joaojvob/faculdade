#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct livro
{
    int codigo;
    char titulo[100];
    char autor[100];

    struct livro *deBaixo;

} tipoLivro;

typedef struct pilha
{
    int quantidade;
    int codigo;

    tipoLivro *base;

    tipoLivro *topo;

} tipoPilha;

tipoPilha *iniciaPilha();

void cadastrarLivro(tipoLivro *planetaNovo, int id);

void exibeLivros(tipoLivro *item);

void insereNaPilha(tipoPilha *pilha);

void exibeTopoDaPilha(tipoPilha *pilha);

void lerLivro(tipoPilha *pilha);

void removeTopoDaPilha(tipoPilha *pilha);