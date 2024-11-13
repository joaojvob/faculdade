#include "estruturas.h"

int main()
{

    int opcao;

    tipoFila *fila;
    tipoLista *lista;

    fila = iniciaFila();

    lista = iniciaLista();

    tipoCaixa *aux;

    do
    {

        printf("\n\n SALA DE ESPERA \n\n");
        printf("\n 1 - Gerar senha ");
        printf("\n 2 - Exibir fila de clientes ");
        printf("\n 3 - Atender Cliente ");
        printf("\n 4 - Exibir a lista de clientes já atendidos ");
        printf("\n 5 - Limpar a lista ");
        printf("\n 0 - SAIR \n ");
        fflush(stdin);
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            insereNaFila(fila);

            break;

        case 2:

            exibeFila(fila);

            break;

        case 3:

            printf("\n Atendendo o cliente %s ", fila->primeiro->nome);

            aux = removeDaFila(fila);

            atendeCliente(lista, aux);

            break;

        case 4:

            exibeLista(lista);

            break;

        case 5:

            excluirLista(lista);

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
