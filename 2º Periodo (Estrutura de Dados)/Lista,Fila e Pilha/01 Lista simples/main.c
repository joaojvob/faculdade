
#include "estruturas.h"
#include <locale.h>

int main()
{

    int codigoTemporario = 1;
    int i;
    int opcao;

    tipoLista *lista;

    lista = iniciaLista();

    do
    {
        printf("\n -------- MENU -------- \n");
        printf("\n 1 - INSERIR NO INICIO ");
        printf("\n 2 - INSERIR NO FIM ");
        printf("\n 3 - EXIBIR TODOS ");
        printf("\n 4 - REMOVER O PRIMERIO ");
        printf("\n 5 - REMOVER O ULTIMO ");
        printf("\n 0 - SAIR \n ");
        fflush(stdin);
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:

            insereNoInicioDaLista(lista);

            break;
        case 2:

            insereNoFinalDaLista(lista);

            break;
        case 3:

            exibeListaCompleta(lista);

            break;

        case 4:

            removePrimeiroDaLista(lista);

            break;

        case 5:

            removeUltimoDaLista(lista);

            break;
        default:

            printf("\n Opção invalida ");
            break;
        }
    } while (opcao != 0);
}
