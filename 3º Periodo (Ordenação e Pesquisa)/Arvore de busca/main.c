#include "estrutura.h"
//#include "patricia.h"
//#include "trie.h"

/*
***** GRUPO *****
EU E DEUS
*/

int main(int argc, char const *argv[])
{
    tipoPessoa *pessoa;
    int n;
    int opcao;

    char teste[100];

    pessoa = (tipoPessoa *)malloc(TTDL * sizeof(tipoPessoa *));

    do
    {
        printf("\n\n ");
        printf("\n 0 - Sair");
        printf("\n 1 - LerArquivo ");
        printf("\n 2 - patricia test ");
        printf("\n 3 - trie test \n ");

        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            free(pessoa);

            exit(1);
            break;

        case 1:

            lerArquivo(pessoa, "cicmo.txt");
            

            break;

        case 2:

            //ordena(pessoa);

            // exibe(pessoa);

            break;

        case 3:

            //arvore = insereNaArvoreTrie(arvore, "teste");
            //arvore = insereNaArvoreTrie(arvore, "joao");
            //arvore = insereNaArvoreTrie(arvore, "julio");
            //   arvore = insereNaArvoreTrie(arvore, pessoa);

        

            break;

        default:
            printf("\n\n Opção invalida !\n\n");
            break;
        }

    } while (opcao != 0);
    return 0;
}
