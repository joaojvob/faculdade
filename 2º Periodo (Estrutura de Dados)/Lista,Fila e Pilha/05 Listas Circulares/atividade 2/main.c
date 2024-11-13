#include "estruturas.h"

int main(int argc, char const *argv[])
{
    int opcao;

    tipoLista *lista;

    lista = iniciaLista();
    do
    {

        printf("\n\n\t<|MENU|> \n\n");
        printf("\n ____________________");
        printf("\n|                    |");
        printf("\n| 0 - SAIR           |");
        printf("\n| 1 - INSERIR MUSICA |");
        printf("\n| 2 - TOCAR MUSICAS  |");
        printf("\n| 3 - EXIBIR TOP 3   |");
        printf("\n|____________________|\n");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            insereNoFinalDaLista(lista);

            break;

        case 2:

            tocarMusica(lista);

            break;

        case 3:

            exibirTOP3(lista);

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
