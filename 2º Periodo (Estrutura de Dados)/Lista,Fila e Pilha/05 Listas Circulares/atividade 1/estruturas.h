#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

typedef struct parque
{
    int codigo;
    char nome[100];

    struct parque *anterior;
    struct parque *atual;
    struct parque *proximo;

} tipoParque;

typedef struct lista
{
    int quantidade;
    tipoParque *primeiro;
    tipoParque *ultimo;

} tipoLista;

tipoLista *iniciaLista();

void cadastraAnimal(tipoParque *animal, int codigo);

void exibeUmAnimal(tipoParque *animal);

void insereNoFinalDaLista(tipoLista *lista);

void ligarBrinquedo(tipoLista *lista);

void remove_o_PrimeiroAnimal(tipoLista *lista);

void remove_o_UltimoAnimal(tipoLista *lista);

void removeQualquerAnimal(tipoLista *lista, char nome[100]);