
#include <stdio.h>
#include <stdlib.h>
#include "Estruturas.h"

int main()
{

    int opcao;
    int i;

    tipoListaAviao *listaAviao;

    listaAviao = iniciaListaAviao();

    tipoListaPassageiro *listaPassageiro;

    listaPassageiro = iniciaListaPassageiro();

    do
    {
        printf("\n\n <><><><> OPTIONS <><><><>\n\n ");
        printf("\n 1 - INSERIR aviao ");
        printf("\n 2 - EXIBIR aviao ");
        printf("\n 3 - INSERIR passageiro  ");
        printf("\n 4 - EXIBIR O passageiro ");
        printf("\n 0 - SAIR \n");
        fflush(stdin);
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:

            inserirAviao(listaAviao);

            break;
        case 2:

            exibirListaDeAvioes(listaAviao);

            break;
        case 3:

            inserirPassageiro(listaPassageiro);

            break;

        case 4:

            exibirPassageiros(listaPassageiro);

            break;

        default:

            if (opcao == 0)
            {
                printf("\n Adios...");
                free(listaAviao);
                free(listaPassageiro);
                exit(1);
            }
            printf("\n\n Opção invalida \n\n ");
            break;
        }
    } while (opcao != 0);
}
