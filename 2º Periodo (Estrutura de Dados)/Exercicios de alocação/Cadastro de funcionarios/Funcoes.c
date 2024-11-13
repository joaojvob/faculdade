#include <stdio.h>
#include <stdlib.h>
#include "Estruturas.h"

tipoLista *iniciaLista()
{
	tipoLista *lista;
	lista = (tipoLista *)malloc(sizeof(tipoLista)); //aloca a lista

	lista->quantidade = 0;
	lista->primeiro = NULL;
	lista->ultimo = NULL;
	return lista;
}

void cadastraFuncionario(tipoFuncionario *funcionario, int codigo)
{

	funcionario->id = codigo;

	printf("\n Nome do funcionario : ");
	fflush(stdin);
	fgets(funcionario->nome, 100, stdin);

	printf("\n Renda do funcionario no mês de Novembro : ");
	fflush(stdin);
	scanf("%f", &funcionario->rendaPrimeiroMes);

	printf("\n Renda do funcionario no mês de Dezembro : ");
	fflush(stdin);
	scanf("%f", &funcionario->rendaSegundoMes);

	printf("\n Renda do funcionario no mês de Janeiro : ");
	fflush(stdin);
	scanf("%f", &funcionario->rendaTerceiroMes);

	funcionario->venda = funcionario->venda + funcionario->rendaPrimeiroMes + funcionario->rendaSegundoMes + funcionario->rendaTerceiroMes;
}

void insereNoFinalDaLista(tipoLista *lista)
{
	tipoFuncionario *funcionario;

	if (lista->quantidade == 0)
	{

		funcionario = (tipoFuncionario *)malloc(sizeof(tipoFuncionario));
		lista->primeiro = funcionario;
		lista->ultimo = funcionario;
	}
	if (lista->quantidade >= 10)
	{

		printf("\n Lista cheia ...");
	}
	else
	{

		funcionario = (tipoFuncionario *)malloc(sizeof(tipoFuncionario));
		lista->ultimo->proximo = funcionario;
		lista->ultimo = funcionario;
	}
	funcionario->proximo = NULL;
	lista->quantidade++;

	cadastraFuncionario(funcionario, lista->quantidade);
}

void exibeListaCompleta(tipoLista *lista)
{

	if (lista->quantidade == 0)
	{

		printf("A lista esta vazia\n");

		return;
	}

	tipoFuncionario *funcionario;

	funcionario = lista->primeiro;

	while (funcionario != NULL)
	{
		printf("\n\n");
		printf("\n ID   		-> %d", funcionario->id);
		printf("\n NOME 		-> %s", funcionario->nome);
		funcionario = funcionario->proximo;
	}
}

int pontuacaoGeralDeCadaFuncionario(tipoLista *lista)
{
	tipoFuncionario *funcionarioAUX;

	funcionarioAUX = lista->primeiro;

	while (funcionarioAUX != NULL)
	{
		printf("\n__________________________________________________\n");

		printf("\n Funcionario(a) %s vendeu em novembro : %.2f  R$ ", funcionarioAUX->nome, funcionarioAUX->rendaPrimeiroMes);

		funcionarioAUX->pontos = funcionarioAUX->rendaPrimeiroMes / 100;

		funcionarioAUX->total = funcionarioAUX->total + funcionarioAUX->pontos;

		printf("\n Totalizando um total de %d pontos ", funcionarioAUX->pontos);

		printf("\n\n-----------------------------------------------------------\n");

		printf("\n Funcionario(a) %s vendeu em dezembro : %.2f R$  ", funcionarioAUX->nome, funcionarioAUX->rendaSegundoMes);

		funcionarioAUX->pontos = funcionarioAUX->rendaSegundoMes / 100;

		funcionarioAUX->total = funcionarioAUX->total + funcionarioAUX->pontos;

		printf("\n Totalizando um total de %d pontos ", funcionarioAUX->pontos);

		printf("\n\n-----------------------------------------------------------\n");

		printf("\n Funcionario(a) %s vendeu em janeiro : %.2f R$ ", funcionarioAUX->nome, funcionarioAUX->rendaTerceiroMes);

		funcionarioAUX->pontos = funcionarioAUX->rendaTerceiroMes / 100;

		funcionarioAUX->total = funcionarioAUX->total + funcionarioAUX->pontos;

		printf("\n Totalizando um total de %d pontos ", funcionarioAUX->pontos);

		printf("\n__________________________________________________\n");

		funcionarioAUX->tdPontos = funcionarioAUX->pontos + funcionarioAUX->pontos + funcionarioAUX->pontos;

		funcionarioAUX = funcionarioAUX->proximo;
	}
}

int pontuacaoGeral(tipoLista *lista)
{
	tipoFuncionario *funAUX;

	int aux = 0;
	int cont = 0;

	funAUX = lista->primeiro;

	while (funAUX != NULL)
	{
		if (lista->primeiro > aux)
		{
			aux = funAUX->total;

			cont = lista->primeiro;
		}
		printf("\n\n Funcionario %s \n teve uma pontuação total de -> %d nos meses de NOV / DES / JAN \n", funAUX->nome, funAUX->total);
		funAUX = funAUX->proximo;
	}
}

float valorTotalVendido(tipoLista *lista)
{
	tipoFuncionario *funcionarioAUX;

	funcionarioAUX = lista->primeiro;

	while (funcionarioAUX != NULL)
	{

		printf("\n\n Funcionario %s \n Valor total das vendas nos meses de NOV / DES / JAN  : %.2f R$ \n", funcionarioAUX->nome, funcionarioAUX->venda);
		funcionarioAUX = funcionarioAUX->proximo;
	}
}
