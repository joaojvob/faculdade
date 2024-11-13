#include "estruturas.h"

int main(int argc, char const *argv[])
{
    int opcao;

    tipoPilha *pilha;

    pilha = iniciaPilha();

    do
    {
        //    system("cls");
        printf("\n -*-*-*-* Menu *-*-*-*-\n\n");
        printf("\n 1 - Comprar livros ");
        printf("\n 2 - Ler livro ");
        printf("\n 3 - Remover livro  ");
        printf("\n 0 - Sair \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            insereNaPilha(pilha);

            break;

        case 2:

            lerLivro(pilha);

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
