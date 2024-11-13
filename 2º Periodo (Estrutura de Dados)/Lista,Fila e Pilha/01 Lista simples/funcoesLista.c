#include "estruturas.h"

tipoLista *iniciaLista()
{

	tipoLista *lista;

	lista = (tipoLista *)malloc(sizeof(tipoLista));

	lista->quantidade = 0;

	lista->primeiro = NULL;

	lista->ultimo = NULL;

	return lista;
}

void preencheVeiculo(tipoVeiculo *veiculoNovo, int codigo)
{

	veiculoNovo->codigo = codigo;

	printf("\n Informe o modelo do veiculo : ");
	fflush(stdin);
	fgets(veiculoNovo->modelo, 100, stdin);

	printf("\n Informe o fabricante do veiculo : ");
	fflush(stdin);
	fgets(veiculoNovo->fabricante, 100, stdin);
}

void insereNoInicioDaLista(tipoLista *lista)
{

	tipoVeiculo *veiculoAuxiliar;

	if (lista->quantidade == 0)
	{

		veiculoAuxiliar = (tipoVeiculo *)malloc(sizeof(tipoVeiculo));

		lista->primeiro = veiculoAuxiliar;
		lista->ultimo = veiculoAuxiliar;
	}
	else
	{

		veiculoAuxiliar = (tipoVeiculo *)malloc(sizeof(tipoVeiculo));

		lista->primeiro->proximo = veiculoAuxiliar;
		lista->primeiro = veiculoAuxiliar;
	}

	veiculoAuxiliar->proximo = NULL;
	lista->quantidade++;

	preencheVeiculo(veiculoAuxiliar, lista->quantidade);
}

void insereNoFinalDaLista(tipoLista *lista)
{
	tipoVeiculo *veiculoAuxiliar;

	if (lista->quantidade == 0)
	{

		veiculoAuxiliar = (tipoVeiculo *)malloc(sizeof(tipoVeiculo));

		lista->primeiro = veiculoAuxiliar;
		lista->ultimo = veiculoAuxiliar;
	}
	else
	{

		veiculoAuxiliar = (tipoVeiculo *)malloc(sizeof(tipoVeiculo));

		lista->ultimo->proximo = veiculoAuxiliar;
		lista->ultimo = veiculoAuxiliar;
	}

	veiculoAuxiliar->proximo = NULL;
	lista->quantidade++;
	preencheVeiculo(veiculoAuxiliar, lista->quantidade);
}

void exibeListaCompleta(tipoLista *lista)
{

	if (lista->quantidade == 0)
	{

		printf("\n Lista vazia ");

		return;
	}

	tipoVeiculo *veiculoAuxiliar;

	veiculoAuxiliar = lista->primeiro;

	while (veiculoAuxiliar != NULL)
	{

		printf("\n\n");
		printf("\n Codigo 		-> %d", veiculoAuxiliar->codigo);
		printf("\n\n Modelo 		-> %s", veiculoAuxiliar->modelo);
		printf("\n Fabricante 		-> %s", veiculoAuxiliar->fabricante);

		veiculoAuxiliar = veiculoAuxiliar->proximo;
	}
}

void removePrimeiroDaLista(tipoLista *lista)
{

	if (lista->quantidade == 0)
	{

		printf("\n Não a nada para ser removido ");

		return;
	}

	tipoVeiculo *enderecoDoPrimeiro = lista->primeiro;

	printf("\n*** removendo o %s", enderecoDoPrimeiro->modelo);

	lista->primeiro = lista->primeiro->proximo;

	free(enderecoDoPrimeiro);
	lista->quantidade--;
}

void removeUltimoDaLista(tipoLista *lista)
{

	if (lista->quantidade == 0)
	{

		printf("\n Não a nada para ser removido");

		return;
	}

	tipoVeiculo *enderecoDoUltimo = lista->ultimo;

	printf("\n*** removendo o %s", enderecoDoUltimo->modelo);

	lista->ultimo = lista->ultimo->proximo;

	free(enderecoDoUltimo);
	lista->quantidade--;
}
