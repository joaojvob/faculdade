#include <stdio.h>
#include <stdlib.h>
#include "Estruturas.h"

int main()
{

	int opcao;
	int quantidade = 0;
	int i;
	int id;

	locadoraDeVeiculos *vetAluga;

	printf("\n Deseja alugar quantos veiculos ? : ");
	fflush(stdin);
	scanf("%d", &quantidade);

	vetAluga = malloc(quantidade * sizeof(locadoraDeVeiculos));

	do
	{
		printf("\n\n");
		printf(" <><> Menu <><>");

		printf("\n 1 - Aluga ");
		printf("\n 2 - Calcular a diaria e exibir as informa��es ");
		printf("\n 0 - Sair \n  ");

		fflush(stdin);
		scanf("%d", &opcao);

		switch (opcao)
		{

		case 1:
		{

			for (i = 0; i < quantidade; i++)
			{

				printf("\n------------------------------------------");
				printf("\n Cadastrando -> %d veiculo ", i + 1);
				alugaVeiculo(&vetAluga[i], id);
			}

			break;
		}

		case 2:
		{

			if (quantidade < 1)
			{
				("nenhum veiculo cadastrado ");
			}
			else
			{

				for (i = 0; i < quantidade; i++)
				{

					printf("\n------------------------------------------");
					printf("\n Exibindo e calculando a diaria do  -> %d� veiculo ", i + 1);

					exibeVeiculoAlugado(&vetAluga[i], id);
					diariaDoVeiculo(&vetAluga[i]);
				}
			}

			break;
		}
		}

	} while (opcao != 0);
	printf("adios");

	return 0;
}
