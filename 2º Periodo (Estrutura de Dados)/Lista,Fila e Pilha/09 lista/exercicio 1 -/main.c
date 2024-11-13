#include "estruturas.h"

int main(int argc, char const *argv[])
{
    int opcao;

    tipoPilha *pilha;

    pilha = iniciaPilha();

    do
    {

        printf("\n -*-*-*-* Menu *-*-*-*-\n\n");
        printf("\n 1 - Inserir na pilha");
        printf("\n 2 - Exibir topo da pilha");
        printf("\n 3 - Exibir toda a pilha \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            insereNaPilha(pilha);

            break;

        case 2:
            exibeTopoDaPilha(pilha);
            break;

        case 3:
            exibePilhaCompleta(pilha);
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
