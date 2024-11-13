#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct email
{
    int codigo;
    char email[100];
    char destinatario[100];
    char data[8];
    float hora;

    struct email *deBaixo;

} tipoEmail;

typedef struct pilha
{
    int quantidadeDeEmails;

    tipoEmail *base;
    tipoEmail *topo;

} tipoPilha;

typedef struct pilhaDosEmailsEnviados
{
    int quantidadeDeEmailsEnviados;

    tipoEmail *base;
    tipoEmail *topo;

} tipoPilhaDeEmailsEnviados;

tipoPilha *iniciaPilha();

tipoPilhaDeEmailsEnviados *iniciaPilhaDeEmailsEnviados();

void pilhaDosEnviados(tipoPilhaDeEmailsEnviados *pilha);

void preencheItem(tipoEmail *emailNovo);

void exibeItem(tipoEmail *item);

void insereNaPilha(tipoPilha *pilha);

void exibePilhaCompleta(tipoPilha *pilha);

void disparaEmails(tipoPilha *pilha, tipoPilhaDeEmailsEnviados *pilhaDosEmailsEnviados);

void removeTopoDaPilha(tipoPilha *pilha);

void exibeTopoDaPilha(tipoPilha *pilha);