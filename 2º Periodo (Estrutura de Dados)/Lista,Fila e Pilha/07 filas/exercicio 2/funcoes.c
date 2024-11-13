#include "estruturas.h"

tipoFila *iniciaFila()
{
    tipoFila *fila;

    fila = (tipoFila *)malloc(sizeof(tipoFila));

    fila->quantidade = 0;
    fila->senha = 1;

    fila->primeiro = NULL;
    fila->ultimo = NULL;

    return fila;
}

tipoLista *iniciaLista()
{
    tipoLista *lista;

    lista = (tipoLista *)malloc(sizeof(tipoLista));

    lista->quantidade = 0;
    lista->codigo = 1;

    lista->primeiro = NULL;
    lista->ultimo = NULL;

    return lista;
}

void informacoesDoCliente(tipoCaixa *clienteNovo, int senha)
{
    clienteNovo->senha = senha;

    printf("\n Informe o seu nome \n -> ");
    fflush(stdin);
    fgets(clienteNovo->nome, 100, stdin);

    printf("\n Informe seu CPF \n -> ");
    fflush(stdin);
    fgets(clienteNovo->cpf, 13, stdin);
}

void exibeUmCliente(tipoCaixa *itemTemporario)
{
    printf("\n _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");

    printf("\n senha = %d ", itemTemporario->senha);
    printf("\n nome  = %s ", itemTemporario->nome);
    printf("\n cpf   = %s ", itemTemporario->cpf);
    printf("\n _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
}

void insereNaFila(tipoFila *fila)
{
    if (fila->quantidade >= 10)
    {
        printf("\n Fila cheia \n");
        return;
    }

    tipoCaixa *elementoNovo;

    elementoNovo = (tipoCaixa *)malloc(sizeof(tipoCaixa));

    informacoesDoCliente(elementoNovo, fila->senha);

    if (fila->primeiro == NULL)
    {
        fila->primeiro = elementoNovo;
        fila->ultimo = elementoNovo;

        elementoNovo->anterior = NULL;
        elementoNovo->proximo = NULL;
    }

    else
    {
        elementoNovo->proximo = fila->ultimo;

        fila->ultimo->anterior = elementoNovo;

        elementoNovo->anterior = NULL;

        fila->ultimo = elementoNovo;
    }

    fila->quantidade++;
    fila->senha++;
}

void exibeFila(tipoFila *fila)
{
    if (fila->quantidade == 0 || fila->primeiro == NULL)
    {
        printf("Fila vazia!\n");
        return;
    }
    if (fila->quantidade == 1 || fila->primeiro == fila->ultimo)
    {
        exibeUmCliente(fila->primeiro);
        return;
    }
    if (fila->quantidade > 1)
    {
        tipoCaixa *itemAtual;

        itemAtual = fila->primeiro;

        while (itemAtual != NULL)
        {
            exibeUmCliente(itemAtual);
            itemAtual = itemAtual->anterior;
        }
    }
}

tipoCaixa *removeDaFila(tipoFila *fila)
{
    if (fila->primeiro == NULL)
    {
        printf("Lista vazia!\n");
        return NULL;
    }

    tipoCaixa *enderecoDoRemovido;
    enderecoDoRemovido = fila->primeiro;

    if (fila->quantidade == 1)
    {

        fila->primeiro = NULL;
        fila->ultimo = NULL;
        fila->quantidade--;
        return enderecoDoRemovido;
    }
    if (fila->quantidade > 1)
    {
        tipoCaixa *primeiroDaFila;
        tipoCaixa *segundoDaFila;

        primeiroDaFila = fila->primeiro;
        segundoDaFila = primeiroDaFila->anterior;
        segundoDaFila = fila->primeiro->anterior;

        segundoDaFila->proximo = NULL;
        fila->primeiro = segundoDaFila;
        fila->quantidade--;
        return enderecoDoRemovido;
    }
}

void atendeCliente(tipoLista *lista, tipoCaixa *itemNovo)
{
    itemNovo->proximo = NULL;
    itemNovo->anterior = NULL;

    if (lista->quantidade == 0)
    {
        lista->primeiro = itemNovo;
        itemNovo->anterior = NULL;
    }
    else
    {
        lista->ultimo->proximo = itemNovo;
        itemNovo->anterior = lista->ultimo;
    }
    lista->ultimo = itemNovo;

    lista->quantidade++;
    lista->codigo++;
}

void exibeLista(tipoLista *lista)
{
    if (lista->quantidade == 0)
    {
        printf("A lista está vazia\n");
        return;
    }
    tipoCaixa *itemTemporario;
    itemTemporario = lista->primeiro;
    while (itemTemporario != NULL)
    {
        exibeUmCliente(itemTemporario);
        itemTemporario = itemTemporario->proximo;
    }
}

int vazia(tipoLista *LISTA)
{
    if (LISTA->primeiro == NULL)
        return 1;
    else
        return 0;
}

void excluirLista(tipoLista *lista)
{

    if (!vazia(lista))
    {
        tipoLista *proxNode, *atual;

        atual = lista->primeiro;
        while (atual != NULL)
        {
            proxNode = atual->primeiro;
            free(atual);
            atual = proxNode;
        }
    }
}