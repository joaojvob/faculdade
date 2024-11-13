#include "estruturas.h"

int main(int argc, char const *argv[])
{
    int opcao;

    tipoFila *fila;

    fila = iniciaFila();

    do
    {
        system("cls");

        printf("\n 1 - Cadastrar mensagem \n ");
        printf("\n 0 - Sair \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            insereUmaMensagemNaFila(fila);
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
