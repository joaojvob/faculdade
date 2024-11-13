#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct telegram
{
    int codigo;
    char mensagem[100];
    float audio;
    float video;

    struct telegram *daFrente;
    struct telegram *deTras;
} tipoSMS;

typedef struct fila
{
    int quantidade;
    int contadorDeCodigo;

    tipoSMS *primeiro;
    tipoSMS *ultimo;
} tipoFila;

tipoFila *iniciaFila();

void cadastraMensagem(tipoSMS *mensagem, int codigo);

void exibeUmSMS(tipoSMS *mensagem);

void insereUmaMensagemNaFila(tipoFila *fila);

void removeDaFila(tipoFila *fila);

void exibeFila(tipoFila *fila);
