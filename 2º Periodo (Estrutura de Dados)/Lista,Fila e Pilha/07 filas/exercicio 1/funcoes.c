#include "estruturas.h"

tipoFila *iniciaFila()
{
    tipoFila *fila;

    fila = (tipoFila *)malloc(sizeof(tipoFila));

    fila->primeiro = NULL;
    fila->ultimo = NULL;

    return fila;
}

void cliente(tipoPedido *pedido)
{
    printf("\n\n");

    printf("\n\n Informe a placa do veiculo -> ");
    fflush(stdin);
    fgets(pedido->placaDoVeiculo, 100, stdin);
}

void exibirPedido(tipoPedido *pedido)
{
    printf("\n\n");
    printf("\n\n Descrição do pedido ");
    printf("\n -> %s ", pedido->pedido);
}

void insereVeiculoNaFila(tipoFila *fila)
{

    tipoPedido *elementoNovo;
    elementoNovo = (tipoPedido *)malloc(sizeof(tipoPedido *));

    cliente(elementoNovo);

    if (fila->primeiro == NULL)
    {

        fila->primeiro = elementoNovo;
        fila->ultimo = elementoNovo;
    }
    else
    {
        elementoNovo->proximo = fila->ultimo;
        fila->ultimo->anterior = elementoNovo;
        fila->ultimo = elementoNovo;
    }
}

void anotaPedido(tipoPedido *pedido)
{
    printf("\n\n Qual o pedido para o cliente  %s ? ", pedido->placaDoVeiculo);
    fflush(stdin);
    fgets(pedido->pedido, 100, stdin);

    printf("\n \n O pedido esta sendo preparado \n ");

    for (size_t i = 0; i < 7; i++)
    {
        printf(".");
        sleep(1);
    }

    printf("\n\n Pedido realizado com sucesso !! \n");
}

void pedido(tipoPedido *primeiroPedido)
{
    if (primeiroPedido == NULL)
    {
        printf("\n\n Não tem ninguém na fila \n ");
        return;
    }
    else
    {
        anotaPedido(primeiroPedido);
    }
}

void entregaPedido(tipoFila *fila)
{

    if (fila->primeiro == NULL)
    {
        printf("\n\n Lista fila ! \n");
        return;
    }
    else
    {
        tipoPedido *segundo;

        segundo = fila->primeiro->anterior;

        if (segundo == NULL)
        {
            free(fila->primeiro);
            free(fila->ultimo);
        }
        else
        {
            free(fila->primeiro);
            segundo->proximo = NULL;
            fila->primeiro = segundo;
        }
    }
}