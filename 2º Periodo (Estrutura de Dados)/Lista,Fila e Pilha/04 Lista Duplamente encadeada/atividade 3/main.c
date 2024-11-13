#include "estruturas.h"

int main(int argc, char const *argv[])
{
    tipoLista *lista;

    lista = iniciaLista();

    int opcao;
    int codigoParametro;

    printf("\n\n \t Fala zeze, bom dia cara ... \n\n");

    do
    {
        printf("\n\n (0)v(0) \n\n");
        printf("\n 0 - Sair ");
        printf("\n 1 - Inscrever jogador ");
        printf("\n 2 - Exibir time ");
        printf("\n 3 - Demitir jogador \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:

            inscreverJogador(lista);

            break;

        case 2:
            exibirTime(lista);
            break;

        case 3:

            printf("\n Informe o numero da camisa do jogador que deseja demitir : \n ");
            fflush(stdin);
            scanf("%d", &codigoParametro);

            removeItemPeloCodigo(lista, codigoParametro);

            break;

        default:

            if (opcao == 0)
            {
                printf("\n\n Se a gente não ganhar do CSA, pelo amor de Deus .... \n\n (Neves Thiago — November 29, 2019 )\n ");
                free(lista);
                exit(1);
            }

            break;
        }

    } while (opcao);

    return 0;
}
