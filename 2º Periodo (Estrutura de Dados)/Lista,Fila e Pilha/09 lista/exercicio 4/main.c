#include "estruturas.h"

int main(int argc, char const *argv[])
{
    int opcao;

    tipoPilha *pilha;

    pilha = iniciaPilha();

    do
    {
        printf("\n 1 - Cria playlist");
        printf("\n 2 - Exibir pilha ");
        printf("\n 3 - Tocar Parte da pilha ");
        printf("\n 0 - Sair \n ");
        printf("");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            insereNaPilha(pilha);

            break;

        case 2:

            exibePilhaCompleta(pilha);

            break;

        case 3:

            removeTopoDaPilha(pilha);

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
