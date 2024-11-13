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

void cria_Arquivo(tipoArquivo *arquivos, int cont)
{
    printf("\n\n ");

    arquivos->codigo = cont;

    printf("\n Nome do arquivo : ");
    fflush(stdin);
    fgets(arquivos->nome, 100, stdin);

    printf("\n Extensão do arquivo : ");
    fflush(stdin);
    fgets(arquivos->extensao, 100, stdin);

    printf("\n Tamanho em kbytes do arquivo : ");
    fflush(stdin);
    scanf("%d", &arquivos->kbytes);
}

void inserirNoFinalDaLista(tipoLista *lista)
{
    tipoArquivo *arquivoTEMP;

    arquivoTEMP = (tipoArquivo *)malloc(sizeof(tipoArquivo));

    arquivoTEMP->proximo = NULL;

    if (lista->quantidade == 0)
    {
        lista->primeiro = arquivoTEMP;
        arquivoTEMP->anterior = NULL;
    }
    else
    {
        lista->ultimo->proximo = arquivoTEMP;
        arquivoTEMP->anterior = lista->ultimo;
    }
    lista->ultimo = arquivoTEMP;
    lista->quantidade++;

    cria_Arquivo(arquivoTEMP, lista->quantidade);
}

void exibirUmArquivo(tipoArquivo *arquivoTEMP)
{
    printf("\n\n");

    printf("\n______________________________________\n");
    printf("\n              Codigo - %d \n", arquivoTEMP->codigo);
    printf("\n Nome - %s ", arquivoTEMP->nome);
    printf("\n Extensão - %s ", arquivoTEMP->extensao);
    printf("\n Tamanho em kbytes - %d ", arquivoTEMP->kbytes);

    if (arquivoTEMP->anterior)
    {
        printf("\n\n ° Anterior -> %s ", arquivoTEMP->anterior->nome);
    }
    else
    {
        printf("\n\n ° Anterior -> NULL ");
    }
    if (arquivoTEMP->proximo)
    {
        printf("\n\n ° Proximo -> %s ", arquivoTEMP->proximo->nome);
    }
    else
    {
        printf("\n\n ° Proximo -> NULL ");
    }
    printf("\n______________________________________\n");
}

void exibirLista(tipoLista *lista)
{

    if (lista->quantidade == 0)
    {
        printf("\n\n Não tem nenhum arquivo para exibir \n\n");
    }
    else
    {
        tipoArquivo *arquivo;
        arquivo = lista->primeiro;
        while (arquivo != NULL)
        {
            exibirUmArquivo(arquivo);
            arquivo = arquivo->proximo;
        }
    }
    printf("\n Prescione qualquer tecla para continuar ... \n ");
    fflush(stdin);
    getchar();
}

void buscarPeloCodigo(tipoLista *lista, int codigo)
{
    tipoArquivo *arquivo;
    arquivo = lista->primeiro;
    while (arquivo != NULL)
    {
        if (arquivo->codigo == codigo)
        {

            printf("\n Nome - %s ", arquivo->nome);
            printf("\n Extensão - %s ", arquivo->extensao);
            printf("\n Tamanho em kbytes - %d \n", arquivo->kbytes);
            return;
        }
        else
        {
            printf("\n\n Arquivo não encontrado ;-; \n\n");
        }
        arquivo = arquivo->proximo;
    }
    printf("\n Prescione qualquer tecla para continuar ... \n ");
    fflush(stdin);
    getchar();
}