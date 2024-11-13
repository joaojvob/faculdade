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

void cadastraJogador(tipoTime *jogador, int codigo)
{
    printf("\n\n");

    jogador->codigo = codigo;

    printf("\n Nome do jogador    : ");
    fflush(stdin);
    fgets(jogador->nomeDoJogador, 100, stdin);

    printf("\n Posição do jogador : ");
    fflush(stdin);
    fgets(jogador->posicaoDoJogador, 100, stdin);

    printf("\n Número do jogador  : ");
    fflush(stdin);
    scanf("%d", &jogador->numeroDoJogador);
}

void inscreverJogador(tipoLista *lista)
{

    tipoTime *jogadorTEMP;

    jogadorTEMP = (tipoTime *)malloc(sizeof(tipoTime));

    jogadorTEMP->proximo = NULL;

    if (lista->quantidade == 0)
    {
        lista->primeiro = jogadorTEMP;
        jogadorTEMP->anterior = NULL;
    }
    else
    {
        lista->ultimo->proximo = jogadorTEMP;
        jogadorTEMP->anterior = lista->ultimo;
    }
    lista->ultimo = jogadorTEMP;

    lista->quantidade++;

    cadastraJogador(jogadorTEMP, lista->quantidade);
}

void exibeUmItem(tipoTime *jogador)
{

    printf("\n________________________________________________\n");
    printf("\n Nome do Jogador       ¬    %s \n", jogador->nomeDoJogador);
    printf("\n Posição do jogador    ¬    %s \n", jogador->posicaoDoJogador);
    printf("\n Número da camisa      ¬    %d \n", jogador->numeroDoJogador);
    if (jogador->anterior)
    {
        printf("\n\n -> Anterior :    %s \n", jogador->anterior->nomeDoJogador);
    }
    else
    {
        printf("\n -> Anterior   :   (vazio) \n");
    }

    if (jogador->proximo)
    {
        printf("\n -> Próximo  :    %s \n", jogador->proximo->nomeDoJogador);
    }
    else
    {
        printf("\n -> Próximo  :   (vazio) \n");
    }

    printf("\n________________________________________________\n");
}

void exibirTime(tipoLista *lista)
{

    printf("\n\n Exibindo time \n\n ");

    if (lista->quantidade == 0)
    {
        printf("\n\n Nenhum jogador cadastrado \n\n ");
        return;
    }

    tipoTime *jogadorTEMP;
    jogadorTEMP = lista->primeiro;

    while (jogadorTEMP != NULL)
    {
        exibeUmItem(jogadorTEMP);
        jogadorTEMP = jogadorTEMP->proximo;
    }

    printf("\n Prescione qualquer tecla para continuar ... \n ");
    fflush(stdin);
    getchar();
}

void removeItemPeloCodigo(tipoLista *lista, int codigoParametro)
{

    tipoTime *jogadorTemporario;
    jogadorTemporario = lista->primeiro;

    while (jogadorTemporario != NULL)
    {

        if (jogadorTemporario->numeroDoJogador == codigoParametro)
        {

            if (jogadorTemporario == lista->primeiro)
            {

                tipoTime *segundo;
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

                    printf("\n Jogador -> %s \n", jogadorTemporario->nomeDoJogador);
                    segundo->anterior = NULL;
                    free(lista->primeiro);
                    lista->primeiro = segundo;
                    lista->quantidade--;
                }
            }

            else if (jogadorTemporario == lista->ultimo)
            {

                tipoTime *penultimo;
                penultimo = lista->ultimo->proximo;

                if (penultimo == NULL)
                {

                    free(lista->ultimo);
                    lista->primeiro = NULL;
                    lista->ultimo = NULL;
                    lista->quantidade--;
                }

                else
                {
                    printf("\n Jogador -> %s \n", jogadorTemporario->nomeDoJogador);
                    penultimo->proximo = NULL;
                    free(lista->ultimo);
                    lista->ultimo = penultimo;
                    lista->quantidade--;
                }
            }

            else
            {

                tipoTime *itemDepois;
                tipoTime *itemAntes;

                itemDepois = jogadorTemporario->proximo;
                itemAntes = jogadorTemporario->anterior;

                itemAntes->proximo = itemDepois;
                itemDepois->anterior = itemAntes;
            }

            printf("\n\n !!!!! DEMITIDO  PELO BAIXO DESEMPENHO !!!!! \n\n ");
            free(jogadorTemporario);
            lista->quantidade--;
            return;
        }
        jogadorTemporario = jogadorTemporario->proximo;
    }

    printf("\n Prescione qualquer tecla para continuar ... \n ");
    fflush(stdin);
    getchar();
}
