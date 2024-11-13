#include "estruturas.h"

tipoLista *iniciaLista()
{
    tipoLista *lista;

    lista = (tipoLista *)malloc(sizeof(tipoLista));

    lista->quantidade = 0;
    lista->primeiro = NULL;
    lista->ultimo = NULL;

    return lista;
}

void criarPost(tipoInsta *publicacao, int cont)
{
    publicacao->codigo = cont;
    publicacao->vizualizacoes = 0;
    printf("\n Quantidade de vizualizações : %d ", publicacao->vizualizacoes);

    printf("\n Endereço da imagem : ");
    fflush(stdin);
    fgets(publicacao->enderecoDaImagem, 100, stdin);
}

void inserirPostNaLista(tipoLista *lista)
{

    tipoInsta *postAUX;

    if (lista->quantidade == 0)
    {

        postAUX = (tipoInsta *)malloc(sizeof(tipoInsta));
        lista->primeiro = postAUX;
        lista->ultimo = postAUX;
    }
    else
    {

        postAUX = (tipoInsta *)malloc(sizeof(tipoInsta));
        lista->ultimo->proximo = postAUX;
        lista->ultimo = postAUX;
    }

    postAUX->proximo = NULL;

    criarPost(postAUX, lista->quantidade);
    lista->quantidade++;
}

void exibirUmStories(tipoInsta *storiesTEMP)
{
    storiesTEMP->vizualizacoes++;
    printf("\n\n");
    printf("\n_________________________\n");

    printf("\n Codigo        - %d ", storiesTEMP->codigo);
    printf("\n\n Endereço      - %s ", storiesTEMP->enderecoDaImagem);
    printf("\n Vizualizações - %d ", storiesTEMP->vizualizacoes);

    printf("\n_________________________\n");
}

void exibirProximoOuAnterior(tipoLista *lista)
{

    if (lista->quantidade == 0)
    {
        printf("\n\n Nenhum stories cadastradp \n\n");
        return;
    }

    char opcao;

    tipoInsta *storiesTEMP;
    storiesTEMP = lista->primeiro;

    while (storiesTEMP != NULL)
    {
        exibirUmStories(storiesTEMP);

        printf("\n O que deseja fazer ?? \n");
        printf("\n A ou a -> Anterior ");
        printf("\n P ou p -> Proximo \n ");
        fflush(stdin);
        scanf("%c", &opcao);

        if (opcao == 'a' || opcao == 'A')
        {
            if (storiesTEMP->anterior == NULL)
            {
                printf("\n\n Não tem mais stories \n\n");
                storiesTEMP = storiesTEMP->anterior;
                return;
            }
            else
            {
                storiesTEMP = storiesTEMP->anterior;
            }
        }
        else if (opcao == 'p' || opcao == 'P')
        {
            if (storiesTEMP->proximo == NULL)
            {
                printf("\n\n Não tem mais stories \n\n ");
                return;
            }
            else
            {
                storiesTEMP = storiesTEMP->proximo;
            }
        }

        if (storiesTEMP->vizualizacoes >= 10)
        {
            removePeloCodigo(lista, storiesTEMP->codigo);
            lista->quantidade--;
        }
    }
}

void removePeloCodigo(tipoLista *lista, int codigoParametro)
{

    tipoInsta *storiesTEMP;
    storiesTEMP = lista->primeiro;

    while (storiesTEMP != NULL)
    {

        if (storiesTEMP->codigo == codigoParametro)
        {

            if (storiesTEMP == lista->primeiro)
            {

                tipoInsta *segundo;
                segundo = lista->primeiro->proximo;

                if (segundo == NULL)
                {

                    free(lista->primeiro);
                    lista->primeiro = NULL;
                    lista->ultimo = NULL;
                    lista->quantidade--;
                }

                else
                {
                    printf("\n Stories -> %s\n", storiesTEMP->enderecoDaImagem);
                    segundo->anterior = NULL;
                    free(lista->primeiro);
                    lista->primeiro = segundo;
                    lista->quantidade--;
                }
            }

            else if (storiesTEMP == lista->ultimo)
            {

                tipoInsta *penultimo;
                penultimo = lista->ultimo->proximo;

                printf("\n Stories -> %s\n", storiesTEMP->enderecoDaImagem);

                penultimo->proximo = NULL;
                free(lista->ultimo);
                lista->ultimo = penultimo;
                lista->quantidade--;
            }

            else
            {

                tipoInsta *itemDepois;
                tipoInsta *itemAntes;

                itemDepois = storiesTEMP->proximo;
                itemAntes = storiesTEMP->anterior;

                itemAntes->proximo = itemDepois;
                itemDepois->anterior = itemAntes;
            }

            printf("\n Stories -> %s\n", storiesTEMP->enderecoDaImagem);
            free(storiesTEMP);
            lista->quantidade--;

            printf("\n\n !!!!! REMOVIDO !!!!! \n\n ");

            return;
        }
        storiesTEMP = storiesTEMP->proximo;
    }

    printf("\n Prescione qualquer tecla para continuar ... \n ");
    fflush(stdin);
    getchar();
}
