#include "estruturas.h"

int main(int argc, char const *argv[])
{

    tipoPilha *pilha;

    pilha = iniciaPilha();

    tipoPilhaDeEmailsEnviados *pilhaDosEmailsEnviados;

    //  pilhaDosEmailsEnviados = iniciaPilhaDeEmailsEnviados();

    int opcao;

    do
    {
        printf("\n\n*-*-*-*-*-*MENU*-*-*-*-*-* \n\n");
        printf("\n 1 - Criar e-mail ");
        printf("\n 2 - Disparar pilha de e-mails ");
        printf("\n 3 - Exibir o topo da pilha ");
        printf("\n 4 - Remover o topo da pilha ");
        printf("\n 0 - Sair \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:

            insereNaPilha(pilha);

            break;

        case 2:

            disparaEmails(pilha, pilhaDosEmailsEnviados);

            break;

        case 3:

            exibeTopoDaPilha(pilha);

            break;

        case 4:

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
