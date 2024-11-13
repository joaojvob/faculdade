#include "estruturas.h"

int main()
{
    int opcao;
    int op;

    tipoLista *lista;

    lista = iniciaLista();

    do
    {
        printf("\n\n <-> OPTIONS <-> \n\n");
        printf("\n 1 - Preencher lista ");
        printf("\n 2 - Exibir lista ");
        printf("\n 3 - remover da lista ");
        printf("\n 0 - Sair \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            printf("\n 1 - Adiciona no inicio da lista ");
            printf("\n 2 - Adiciona no final da lista \n ");
            fflush(stdin);
            scanf("%d", &op);

            switch (op)
            {
            case 1:

                inserirNoInicioDaLista(lista);

                break;

            case 2:

                inserirNoFinalDaLista(lista);

                break;

            default:
                printf("\n\n Opção invalida \n\n ");
                break;
            }

            break;

        case 2:

            exibeListaCompleta(lista);

            break;

        case 3:

            removeUltimoDaLista(lista);

            break;

        default:

            if (opcao == 0)
            {
                printf("\n\n ADIOS .... \n\n ");

                free(lista);
                exit(1);
            }

            printf("\n\n Opção invalida \n\n ");

            break;
        }
    } while (opcao != 0);

    return 0;
}
