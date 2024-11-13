#include "estruturas.h"

int main(int argc, char const *argv[])
{
    int opcao;
    char nome[100];

    tipoLista *lista;
    tipoParque *codigo;
    lista = iniciaLista();
    do
    {

        printf("\nESCOLHA\n");
        printf("\n 0 - SAIR ");
        printf("\n 1 - INSERIR ");
        printf("\n 2 - Ligar brinquedo ");
        printf("\n 3 - Remover animal \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            insereNoFinalDaLista(lista);

            break;

        case 2:

            ligarBrinquedo(lista);

            break;

        case 3:

            printf("\n Informe o nome do animal para remover \n -> ");
            fflush(stdin);
            fgets(nome, 100, stdin);

            removeQualquerAnimal(lista, nome);

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
