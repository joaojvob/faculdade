#include <stdio.h>
#include <stdlib.h>
#include "Estruturas.h"

tipoListaAviao *iniciaListaAviao()
{

	tipoListaAviao *listaAviao;

	listaAviao = (tipoListaAviao *)malloc(sizeof(tipoListaAviao));

	listaAviao->quantidade = 0;
	listaAviao->primeiro = NULL;
	listaAviao->ultimo = NULL;
}

void cadastraAviao(tipoAviao *passagem, int codigo)
{

	passagem->codigo = codigo;

	printf("\n\n");

	printf("\n Nome da companhia : ");
	fflush(stdin);
	fgets(passagem->nomeDaCompanhia, 100, stdin);

	printf("\n Local de origem : ");
	fflush(stdin);
	fgets(passagem->origem, 100, stdin);

	printf("\n Local de destino : ");
	fflush(stdin);
	fgets(passagem->destino, 100, stdin);

	passagem->poltronas = 0;
}

void inserirAviao(tipoListaAviao *lista)
{

	tipoAviao *aviaoAux;

	if (lista->quantidade == 0)
	{
		aviaoAux = (tipoListaAviao *)malloc(sizeof(tipoListaAviao));

		lista->primeiro = aviaoAux;
		lista->ultimo = aviaoAux;
	}
	else
	{
		aviaoAux = (tipoListaAviao *)malloc(sizeof(tipoListaAviao));

		lista->ultimo->proximo = aviaoAux;
		lista->ultimo = aviaoAux;
	}
	aviaoAux->proximo = NULL;
	lista->quantidade++;

	cadastraAviao(aviaoAux, lista->quantidade);
}

void exibirListaDeAvioes(tipoListaAviao *lista)
{
	tipoListaPassageiro *vaga;

	if (lista->quantidade == 0)
	{
		printf("\n\n Não tem voos agendados \n\n");
		return;
	}
	else
	{
		tipoAviao *aviaoAux;

		aviaoAux = lista->primeiro;

		while (aviaoAux != NULL)
		{

			printf("\n\n");

			printf("\n Codigo do avião : %d \n ", aviaoAux->codigo);

			printf("\n Nome da companhia : %s ", aviaoAux->nomeDaCompanhia);

			printf("\n Local de origem : %s ", aviaoAux->origem);

			printf("\n Local de destino : %s ", aviaoAux->destino);

			printf("\n -->  %d/10 de poltronas ocupadas ", aviaoAux->poltronas);

			printf("\n\n");

			aviaoAux = aviaoAux->proximo;
		}
	}
}

tipoListaPassageiro *iniciaListaPassageiro()
{

	tipoListaPassageiro *listaDePessoas;

	listaDePessoas = (tipoListaPassageiro *)malloc(sizeof(tipoListaPassageiro));

	listaDePessoas->quantidade = 0;
	listaDePessoas->primeiroPassageiro = NULL;
	listaDePessoas->ultimoPassageiro = NULL;
}

void cadastrarPassageiro(tipoPassageiro *voo, int codigo)
{
	tipoAviao *assentos;

	//assentos->poltronas++;

	voo->id = codigo;

	printf("\n\n ");

	printf("\n Nome do passageiro : ");
	fflush(stdin);
	fgets(voo->nomeDoPassageiro, 100, stdin);

	printf("\n Numero do passaporte : ");
	fflush(stdin);
	fgets(voo->numeroDoPassaporte, 8, stdin);

	printf("\n Sexo : ");
	fflush(stdin);
	fgets(voo->sexo, 9, stdin);
}

void inserirPassageiro(tipoListaPassageiro *lista)
{
	tipoPassageiro *passageiroAux;
	tipoAviao *ass;

	if (lista->quantidade == 0)
	{
		passageiroAux = (tipoListaPassageiro *)malloc(sizeof(tipoListaPassageiro));

		lista->primeiroPassageiro = passageiroAux;
		lista->ultimoPassageiro = passageiroAux;
	}
	if (lista->quantidade > 10)
	{
		printf("\n\n Voo lotado ;-; \n\n");
	}

	else
	{
		passageiroAux = (tipoListaPassageiro *)malloc(sizeof(tipoListaPassageiro));

		lista->ultimoPassageiro->proximo = passageiroAux;
		lista->ultimoPassageiro = passageiroAux;
	}
	passageiroAux->proximo = NULL;
	lista->quantidade++;

	cadastrarPassageiro(passageiroAux, lista->quantidade);
}

void exibirPassageiros(tipoListaPassageiro *lista)
{

	tipoPassageiro *passageiroAux;
	tipoListaAviao *cont;

	printf("\n\n");

	if (cont->quantidade == 0)
	{
		printf("\n\n Nenhuma passagem comprada \n\n");
	}
	else
	{
		passageiroAux = lista->primeiroPassageiro;

		while (passageiroAux != NULL)
		{
			printf("\n\n ");

			printf("\n ID do passageiro : %d \n ", passageiroAux->id);

			printf("\n Nome do passageiro : %s ", passageiroAux->nomeDoPassageiro);

			printf("\n Numero do passaporte : %s ", passageiroAux->numeroDoPassaporte);

			printf("\n Sexo : %s ", passageiroAux->sexo);

			printf("\n\n");

			passageiroAux = passageiroAux->proximo;
		}
	}
}
