#include "estruturas.h"

int main(int argc, char const *argv[])
{
    tipoFila *fila;

    fila = iniciaFila();

    item *itemTemporario;

    int opcao;

    do
    {
        printf("\n 1 - Inserir na fila ");
        printf("\n 2 - Exibir o primeiro da fila ");
        printf("\n 3 - Exibir todos da fila ");
        printf("\n 4 - Remover o primeiro ");
        printf("\n 0 - Sair \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            insereNaFila(fila);

            break;

        case 2:

            exibeUmItem(fila->primeiro);

            break;

        case 3:

            exibeFila(fila);

            break;

        case 4:

            removeDaFila(fila);

            break;

        default:
            if (opcao == 0)
            {
                printf("\n\n Adios ....");
                exit(1);
            }
            else
            {
                printf("\n\n Opção invalida \n\n");
            }

            break;
        }
    } while (opcao);

    return 0;
}
