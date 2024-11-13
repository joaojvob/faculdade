#include "estruturas.h"

tipoPilha *iniciaPilha()
{
    tipoPilha *pilha;

    pilha = (tipoPilha *)malloc(sizeof(tipoPilha));

    pilha->base = NULL;
    pilha->topo = NULL;
    pilha->quantidadeDeEmails = 0;

    return pilha;
}

tipoPilhaDeEmailsEnviados *iniciaPilhaDosEnviados()
{
    tipoPilhaDeEmailsEnviados *pilhaEnviados;

    pilhaEnviados = (tipoPilhaDeEmailsEnviados *)malloc(sizeof(tipoPilhaDeEmailsEnviados));

    pilhaEnviados->base = NULL;
    pilhaEnviados->topo = NULL;
    pilhaEnviados->quantidadeDeEmailsEnviados = 0;

    return pilhaEnviados;
}

void pilhaDosEnviados(tipoPilhaDeEmailsEnviados *pilha)
{

    tipoEmail *itemNovo;
    itemNovo = (tipoEmail *)malloc(sizeof(tipoEmail));

    if (pilha->quantidadeDeEmailsEnviados == 0)
    {
        pilha->base = itemNovo;
        itemNovo->deBaixo = NULL;
    }
    else
    {
        itemNovo->deBaixo = pilha->topo;
    }
    pilha->topo = itemNovo;
    pilha->quantidadeDeEmailsEnviados++;
}

void preencheItem(tipoEmail *emailNovo)
{
    printf("\n\n");

    printf("\n Destinatário \n -> ");
    fflush(stdin);
    fgets(emailNovo->destinatario, 100, stdin);

    printf("\n Assunto \n -> ");
    fflush(stdin);
    fgets(emailNovo->email, 100, stdin);

    printf("\n Data de envio \n -> ");
    fflush(stdin);
    fgets(emailNovo->data, 8, stdin);

    printf("\n Hora do envio \n -> ");
    fflush(stdin);
    scanf("%f", &emailNovo->hora);
}

void exibeItem(tipoEmail *item)
{

    printf("\n-------------------\n");
    printf("\n DESTINATARIO  : %s ", item->destinatario);
    printf("\n ASSUNTO       : %s ", item->email);
    printf("\n DATA %s \n HORA %.2f ", item->data, item->hora);
    printf("\n-------------------\n");
}

void insereNaPilha(tipoPilha *pilha)
{

    tipoEmail *itemNovo;
    itemNovo = (tipoEmail *)malloc(sizeof(tipoEmail));

    preencheItem(itemNovo);
    if (pilha->quantidadeDeEmails == 0)
    {
        pilha->base = itemNovo;
        itemNovo->deBaixo = NULL;
    }
    else
    {
        itemNovo->deBaixo = pilha->topo;
    }
    pilha->topo = itemNovo;
    pilha->quantidadeDeEmails++;
}

void exibePilhaCompleta(tipoPilha *pilha)
{
    if (pilha->quantidadeDeEmails == 0)
    {
        printf("\n\n A pilha está vazia \n\n");
        return;
    }
    if (pilha->quantidadeDeEmails == 1)
    {
        exibeItem(pilha->topo);
        return;
    }

    tipoEmail *auxiliar = pilha->topo;

    while (auxiliar != NULL)
    {
        exibeItem(auxiliar);
        auxiliar = auxiliar->deBaixo;
        printf("\n Enviando o e-mail ao destinatario \n");
        for (size_t i = 0; i < 3; i++)
        {
            printf(".");
            sleep(1);
        }
    }
}

void exibeTopoDaPilha(tipoPilha *pilha)
{
    if (pilha->quantidadeDeEmails == 0)
    {
        printf("\n\n A pilha está vazia \n\n");
        return;
    }
    if (pilha->quantidadeDeEmails == 1)
    {
        exibeItem(pilha->topo);
        return;
    }

    tipoEmail *auxiliar = pilha->topo;

    exibeItem(auxiliar);
}

void disparaEmails(tipoPilha *pilha, tipoPilhaDeEmailsEnviados *pilhaDosEmailsEnviados)
{

    tipoEmail *auxiliar = pilha->topo;

    if (pilha->quantidadeDeEmails == 0)
    {
        printf("\n A pilha já estava vazia \n ");
        return;
    }
    if (pilha->quantidadeDeEmails == 1)
    {
        exibeItem(auxiliar);
        pilhaDosEnviados(pilhaDosEmailsEnviados);
        free(pilha->topo);
        pilha->topo = NULL;
        pilha->base = NULL;
        pilha->quantidadeDeEmails = 0;
        printf("Pilha vazia!\n");
        return;
    }

    tipoEmail *novoTopo;

    while (auxiliar != NULL)
    {
        exibeItem(auxiliar);
        auxiliar = auxiliar->deBaixo;
        printf("\n Enviando o e-mail ao destinatario \n");
        for (size_t i = 0; i < 3; i++)
        {
            printf(".");
            sleep(1);
        }
        pilhaDosEnviados(pilhaDosEmailsEnviados);
        novoTopo = pilha->topo->deBaixo;
        free(pilha->topo);
        pilha->topo = novoTopo;
        pilha->quantidadeDeEmails--;
    }
}

void removeTopoDaPilha(tipoPilha *pilha)
{
    if (pilha->quantidadeDeEmails == 0)
    {
        printf("A pilha já estava vazia\n");
        return;
    }
    if (pilha->quantidadeDeEmails == 1)
    {
        free(pilha->topo);
        pilha->topo = NULL;
        pilha->base = NULL;
        pilha->quantidadeDeEmails = 0;
        printf("Pilha vazia!\n");
        return;
    }

    tipoEmail *novoTopo;

    novoTopo = pilha->topo->deBaixo;
    free(pilha->topo);
    pilha->topo = novoTopo;
    pilha->quantidadeDeEmails--;
    printf("\n Topo removido \n");
}