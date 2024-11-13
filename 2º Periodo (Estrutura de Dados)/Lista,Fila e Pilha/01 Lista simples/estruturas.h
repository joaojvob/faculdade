
#include <stdio.h>
#include <stdlib.h>

typedef struct veiculos
{

	int codigo;
	char modelo[100];
	char fabricante[100];

	struct veiculos *proximo;

} tipoVeiculo;

typedef struct lista
{

	int quantidade;

	tipoVeiculo *primeiro;
	tipoVeiculo *ultimo;

} tipoLista;

tipoLista *iniciaLista();

void preencheVeiculo(tipoVeiculo *veiculoNovo, int codigo);

void insereNoFinalDaLista(tipoLista *lista);

void exibeListaCompleta(tipoLista *lista);

void removePrimeiroDaLista(tipoLista *lista);

/*========================================
Funcoees a serem criadas
========================================*/

//Inserir no comeco da lista (obrigatório)

void insereNoInicioDaLista(tipoLista *lista);

//Remover itens
//Item do inicio (obrigatório * mas ja ta pronto)
//Item do final  (facultativo)

void removeUltimoDaLista(tipoLista *lista);
//Item item escolhido do usuário	 (facultativo)
