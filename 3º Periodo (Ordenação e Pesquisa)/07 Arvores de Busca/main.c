#include "estrutura.h"
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
    ArvoreTRIE *arv;
    do
    {
        printf("\n\n ");
        printf("\n 0 - Sair");
        printf("\n 1 - Ler Arquivo ");
        printf("\n 2 - Pesquisa na arvore \n ");

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
            printf("\n Informe o cpf para fazer a pesquisa na arvore \n ");
            fflush(stdin);
            scanf("%s", teste);
            buscaNaArvore(arv, teste);

            break;

        default:
            printf("\n\n Opção invalida !\n\n");
            break;
        }

    } while (opcao != 0);
    return 0;
}
