#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Estruturas.h"

int main()
{
	setlocale(LC_ALL, "portuguese");

	int opcao;
	int codigo;
	int i;
	int cont = 0;
	tipoLista *lista;

	lista = iniciaLista();

	do
	{

		printf("\n	Menu 	\n");
		printf("\n 0 - SAIR ");
		printf("\n 1 - Inserir funcionario ");
		printf("\n 2 - Exibir funcionarios cadastrados ");
		printf("\n 3 - Calcular e exibir pontuação dos meses de NOV / DES / JAN ");
		printf("\n 4 - Pontuação geral ");
		printf("\n 5 - Valor total vendido \n ");
		fflush(stdin);
		scanf("%d", &opcao);

		switch (opcao)
		{

		case 1:
		{

			insereNoFinalDaLista(lista);

			break;
		}

		case 2:
		{

			exibeListaCompleta(lista);

			break;
		}

		case 3:
		{

			pontuacaoGeralDeCadaFuncionario(lista);

			break;
		}

		case 4:
		{

			pontuacaoGeral(lista);

			break;
		}

		case 5:
		{

			valorTotalVendido(lista);

			break;
		}

		default:

			if (opcao == 0)
			{
				printf("\n Adios...");
				free(lista);
				exit(1);
			}
			printf("\n Opção invalida ");

			break;
		}
	} while (opcao != 0);

	return 0;
}
