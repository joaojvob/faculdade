#include "estruturas.h"

tipoLista *iniciaLista()
{
    tipoLista *lista;

    lista = (tipoLista *)malloc(sizeof(tipoLista));

    lista->quantidade = 0;
    lista->primeiro = NULL;
    lista->ultimo = NULL;

    return;
}

void cadastraMusica(tipoSpotfy *musica, int codigo)
{
    musica->quantidadeDeVezesQueFoiTocada = 0;

    printf("\n Nome da Musica : ");
    fflush(stdin);
    fgets(musica->nomeDaMusica, 100, stdin);

    printf("\n Duração em segundos :");
    fflush(stdin);
    scanf("%f", &musica->duracaoDaMusica);
}

void exibeUmaMusica(tipoSpotfy *musica)
{

    printf("\n________________________________\n ");
    //    printf("\n Código        ->    %d \n ", musica->codigo);
    printf("\n Nome          ->    %s  ", musica->nomeDaMusica);
    printf("\n Duração       ->    %2.f \n ", musica->duracaoDaMusica);
    printf("\n Musica tocada ->    %d vezes \n ", musica->quantidadeDeVezesQueFoiTocada);
}

void insereNoFinalDaLista(tipoLista *lista)
{

    tipoSpotfy *musicaTEMP;

    musicaTEMP = (tipoSpotfy *)malloc(sizeof(tipoSpotfy));

    if (lista->quantidade == 0)
    {
        musicaTEMP->proximo = NULL;
        musicaTEMP->anterior = NULL;

        lista->primeiro = musicaTEMP;
        lista->ultimo = musicaTEMP;
    }
    else
    {
        lista->ultimo->proximo = musicaTEMP;
        musicaTEMP->anterior = lista->ultimo;
        lista->ultimo = musicaTEMP;
        musicaTEMP->proximo = lista->primeiro;
        lista->primeiro->anterior = lista->ultimo;
    }

    cadastraMusica(musicaTEMP, lista->quantidade);
    lista->quantidade++;
}

void tocarMusica(tipoLista *lista)
{
    int i;
    int tempo = 0;
    tipoSpotfy *musicaTEMP;
    musicaTEMP = lista->primeiro;

    if (lista->quantidade == 0)
    {
        printf("\n\n >-< Lista vazia >-< \n\n");
        return;
    }

    do
    {
        musicaTEMP->quantidadeDeVezesQueFoiTocada++;
        exibeUmaMusica(musicaTEMP);

        tempo += musicaTEMP->duracaoDaMusica;
        musicaTEMP = musicaTEMP->proximo;

        printf("\n Tempo da musica tocado -:> %d ", tempo);
        printf("\n________________________________\n ");

        sleep(1);

    } while (tempo < 3600);
    printf("\n Limite atingido");
}

void exibirTOP3(tipoLista *lista)
{
    tipoSpotfy *primeiroLugar;
    tipoSpotfy *segundoLugar;
    tipoSpotfy *terceiroLugar;
    tipoSpotfy *musicaTEMP;

    if (lista->quantidade == 0)
    {
        printf("\n Não há musicas na playlist ;-; \n");
        return;
    }
    if (lista->quantidade == 1)
    {
        primeiroLugar = lista->primeiro;
        if (primeiroLugar->quantidadeDeVezesQueFoiTocada > 0)
        {
            printf("\n A musica mais ouvida foi -:> ");
            exibeUmaMusica(primeiroLugar);
        }
        else
        {
            printf("\n A playlist ainda não foi iniciada ");
            return;
        }
        return;
    }

    primeiroLugar = lista->primeiro;
    musicaTEMP = lista->primeiro;

    for (size_t i = 0; i < lista->quantidade; i++)
    {
        if (musicaTEMP->quantidadeDeVezesQueFoiTocada > primeiroLugar->quantidadeDeVezesQueFoiTocada)
        {
            primeiroLugar = musicaTEMP;
        }
        musicaTEMP = musicaTEMP->proximo;
    }

    musicaTEMP = lista->primeiro;
    segundoLugar = primeiroLugar->proximo;

    for (size_t i = 0; i < lista->quantidade; i++)
    {
        if (musicaTEMP != primeiroLugar && musicaTEMP->quantidadeDeVezesQueFoiTocada > segundoLugar->quantidadeDeVezesQueFoiTocada)
        {
            segundoLugar = musicaTEMP;
        }
    }

    if (lista->quantidade >= 3)
    {
        musicaTEMP = lista->primeiro;
        terceiroLugar = primeiroLugar->proximo;
        if (terceiroLugar == segundoLugar)
        {
            terceiroLugar = segundoLugar->proximo;
        }
        if (terceiroLugar == primeiroLugar)
        {
            terceiroLugar = segundoLugar->anterior;
        }
        for (size_t i = 0; i < lista->quantidade; i++)
        {
            if (musicaTEMP != primeiroLugar && musicaTEMP != segundoLugar && musicaTEMP->quantidadeDeVezesQueFoiTocada > terceiroLugar->quantidadeDeVezesQueFoiTocada)
            {
                segundoLugar = musicaTEMP;
            }
        }
    }
    printf("\n\n -:> TOP 1 ");
    exibeUmaMusica(primeiroLugar);

    printf("\n\n -:> TOP 2 ");
    exibeUmaMusica(segundoLugar);

    printf("\n\n -:> TOP 3 ");
    exibeUmaMusica(terceiroLugar);
}
