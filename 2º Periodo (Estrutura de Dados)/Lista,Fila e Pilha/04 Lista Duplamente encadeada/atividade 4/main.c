#include "estruturas.h"

int main(int argc, char const *argv[])
{
    tipoLista *lista;

    lista = iniciaLista();

    int opcao;
    int codigoParametro;

    do
    {
        printf("\n\n ПАРАМЕТРЫ \n\n");
        printf("\n 0 - Sair ");
        printf("\n 1 - Cadastrar stories ");
        printf("\n 2 - Exibir stories \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:

            inserirPostNaLista(lista);

            break;

        case 2:
            exibirProximoOuAnterior(lista);
            break;

        default:

            if (opcao == 0)
            {
                printf("\n\n ADIOS..\n ");
                free(lista);
                exit(1);
            }

            break;
        }

    } while (opcao);

    return 0;
}
