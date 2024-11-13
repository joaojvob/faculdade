#include<stdio.h>
#include<stdlib.h>


/****************************************
Definição da estrutura da lista
****************************************/
typedef struct veiculos{
	int codigo;
	char modelo[100];
	char fabricante[100];
	struct veiculos *proximo;
}tipoVeiculo;

typedef struct lista{
	int quantidade;
	tipoVeiculo *primeiro;
	tipoVeiculo *ultimo;
}tipoLista;



//inicia a lista
tipoLista * iniciaLista();

//pergunta ao usuário os valores para criar um veículo novo
void preencheVeiculo(tipoVeiculo *veiculoNovo, int codigo);

void insereNoFinalDaLista(tipoLista *lista);

void exibeListaCompleta(tipoLista *lista);

void removePrimeiroDaLista(tipoLista *lista);


/*========================================
Funções a serem criadas
========================================*/

//Inserir no começo da lista (obrigatório)


//Remover itens
	//Item do início (obrigatório * mas já tá pronto)
	//Item do final  (facultativo)
	//Item item escolhido do usuário	 (facultativo)

