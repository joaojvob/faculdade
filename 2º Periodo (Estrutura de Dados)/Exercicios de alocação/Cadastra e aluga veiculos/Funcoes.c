#include <stdio.h>
#include <stdlib.h>
#include "Estruturas.h"

void alugaVeiculo(locadoraDeVeiculos *aluga, int codigo)
{

	printf("\n\n");

	strcpy(aluga->situacaoDoVeiculo, "Não alugado \n ");

	printf(" Situação do veiculo : %s \n", aluga->situacaoDoVeiculo);

	printf("\n ID :  ");
	fflush(stdin);
	scanf("%d", &aluga->id);

	printf("\n Modelo do veiculo : ");
	fflush(stdin);
	fgets(aluga->modelo, 100, stdin);

	printf("\n Placa do veiculo : ");
	fflush(stdin);
	fgets(aluga->placa, 100, stdin);

	codigo = aluga->id;
}

float diariaDoVeiculo(locadoraDeVeiculos *diaria)
{

	float tt = 0;

	printf("\n Valor da diaria do veiculo : ");
	fflush(stdin);
	scanf("%f", &diaria->valorDaDiaria);

	printf("\n Quantidade de dias que o sr(a) ira ficar com o veiculo : ");
	fflush(stdin);
	scanf("%f", &diaria->dias);

	tt = diaria->valorDaDiaria * diaria->dias;

	printf("\n Valor total do aluguel do veiculo : %.2f ", tt);

	return tt;
}

void exibeVeiculoAlugado(locadoraDeVeiculos *exibe, int id)
{

	printf("\n\n");

	printf("\n ID : %d ", exibe->id);

	printf("\n Modelo do veiculo : %s ", exibe->modelo);

	printf("\n Placa do veiculo : %s ", exibe->placa);

	strcpy(exibe->situacaoDoVeiculo, "Alugado \n ");

	printf("\n Situação do veiculo : %s \n", exibe->situacaoDoVeiculo);
}
