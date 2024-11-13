#include "estruturas.h"

tipoFila *iniciaFila()
{
    tipoFila *fila;
    fila = (tipoFila *)malloc(sizeof(tipoFila));

    fila->quantidade = 0;
    fila->contadorDeCodigo = 1;

    fila->primeiro = NULL;
    fila->ultimo = NULL;

    return fila;
}

void cadastraMensagem(tipoSMS *mensagem, int codigo)
{
    mensagem->codigo = codigo;

    printf("\n\n");

    printf("\n Digite mensagem que deseja enviar \n -> ");
    fflush(stdin);
    fgets(mensagem->mensagem, 100, stdin);
}

void exibeUmSMS(tipoSMS *mensagem)
{
    printf("\n---------------------------------------\n");
    printf("\n Código     =    %d ", mensagem->codigo);
    printf("\n Descrição  =    %s ", mensagem->mensagem);
    printf("\n---------------------------------------\n");
}

void insereUmaMensagemNaFila(tipoFila *fila)
{
    tipoSMS *mensagemNova;

    if (fila->quantidade >= 10)
    {
        printf("\n Limite de mensagens inseridas atingido  \n ");

        printf("\n Prescione qualquer tecla para continuar ....");
        fflush(stdin);
        getchar();

        removeDaFila(fila);
        return;
    }

    mensagemNova = (tipoSMS *)malloc(sizeof(tipoSMS));

    cadastraMensagem(mensagemNova, fila->contadorDeCodigo);

    if (fila->primeiro == NULL)
    {
        fila->primeiro = mensagemNova;
        fila->ultimo = mensagemNova;
        mensagemNova->deTras = NULL;
        mensagemNova->daFrente = NULL;
    }
    else
    {
        mensagemNova->daFrente = fila->ultimo;
        fila->ultimo->deTras = mensagemNova;
        mensagemNova->deTras = NULL;
        fila->ultimo = mensagemNova;
    }
    fila->quantidade++;
    fila->contadorDeCodigo++;
}

void removeDaFila(tipoFila *fila)
{

    if (fila->primeiro == NULL)
    {
        printf("Lista vazia!\n");
        return;
    }
    if (fila->quantidade == 1)
    {
        printf("\n Exibindo mensagens \n ");
        exibeFila(fila);

        printf("\n          ! ! Mensagens excluidas ! ! \n ");
        printf("\n Prescione qualquer tecla para continuar .... \n ");
        fflush(stdin);
        getchar();

        free(fila);
        fila->primeiro = NULL;
        fila->ultimo = NULL;
        fila->quantidade - 10;
        return;
    }
    if (fila->quantidade > 1)
    {
        printf("\n Enviando mensagens \n ");
        exibeFila(fila);

        printf("\n          ! ! Mensagens excluidas ! ! \n ");
        printf("\n Prescione qualquer tecla para continuar .... \n ");
        fflush(stdin);
        getchar();

        tipoSMS *primeiroDaFila;
        tipoSMS *segundoDaFila;

        primeiroDaFila = fila->primeiro;
        segundoDaFila = primeiroDaFila->deTras;
        segundoDaFila = fila->primeiro->deTras;

        free(fila);

        segundoDaFila->daFrente = NULL;
        fila->primeiro = segundoDaFila;
        fila->quantidade - 10;

        return;
    }
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

        exibeUmSMS(fila->primeiro);
        return;
    }
    if (fila->quantidade > 1)
    {

        tipoSMS *itemAtual;
        itemAtual = fila->primeiro;
        while (itemAtual != NULL)
        {
            exibeUmSMS(itemAtual);
            itemAtual = itemAtual->deTras;
            sleep(1);
        }
    }
}