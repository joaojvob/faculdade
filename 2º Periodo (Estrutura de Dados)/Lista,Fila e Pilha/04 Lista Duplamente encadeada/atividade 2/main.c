#include "estruturas.h"

int main()
{
    int opcao;
    int escolha;

    int parametro;

    tipoLista *lista;

    lista = iniciaLista();

    do
    {
        printf("\n \t\t °<>°  OPZIONI °<>° \n\n ");
        printf("\n 0 - Sair");
        printf("\n 1 - Inserir arquivos na lista ");
        printf("\n 2 - Exibir todos os arquivos ");
        printf("\n 3 - Localizar um arquivo \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            inserirNoFinalDaLista(lista);

            break;

        case 2:

            exibirLista(lista);

            break;

        case 3:

            printf("\n\n Informe o codigo do arquivo que deseja buscar  \n\n  ->  ");
            fflush(stdin);
            scanf("%d", &parametro);

            buscarPeloCodigo(lista, parametro);

            break;
        default:

            if (opcao == 0)
            {
                printf("\n\n adios.....\n\n");
                free(lista);
                exit(1);
            }
            else
            {
                printf("\n\n Opção invalida ...\n\n");
            }

            break;
        }

    } while (opcao != 0);

    return 0;
}
