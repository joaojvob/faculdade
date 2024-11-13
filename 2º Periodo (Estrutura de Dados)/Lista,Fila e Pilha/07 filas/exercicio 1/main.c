#include "estruturas.h"

int main()
{

    int opcao;
    int verificaPedido;

    tipoFila *fila;

    fila = iniciaFila();

    do
    {

        printf("\n\n Drive-through \n\n");
        printf("\n 1 - Anotar pedido ");
        printf("\n 2 - Atender cliente ");
        printf("\n 3 - Entregar pedido ");
        printf("\n 0 - SAIR \n ");
        fflush(stdin);
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:

            insereVeiculoNaFila(fila);

            break;

        case 2:

            pedido(fila->primeiro);

            break;

        case 3:

            if (fila->primeiro != NULL)
            {
                verificaPedido = strlen(fila->primeiro->pedido);
            }
            else
            {
                verificaPedido = 0;
            }
            if (fila->primeiro == NULL)
            {
                printf("\n\n Não há clientes ma fila ");
            }
            else if (verificaPedido == 0)
            {
                printf("\n\n O cliente %s não fez seu predido ", fila->primeiro->placaDoVeiculo);
            }
            else
            {
                printf("\n\n Pedido %s entregue \n PROXIMO...");
                entregaPedido(fila);
            }

            break;
        default:
            if (opcao == 0)
            {
                printf("\n\n ADIOS..\n ");

                exit(1);
            }
            else
            {
                printf("\n Opção invalida \n");
            }

            break;
        }
    } while (opcao);
}
