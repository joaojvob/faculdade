#include "estruturas.h"

tipoPilha *criarPilha()
{
    tipoPilha *pilha;

    pilha = (tipoPilha *)malloc(sizeof(tipoPilha));

    pilha->disco = 0;

    return pilha;
}

void destruirPilha(tipoPilha *pilha) // desmonta a pilha
{
    if (pilha != NULL)
    {
        free(pilha);
    }
}

int desempilharDiscos(tipoPilha *pilha)
{
    if (pilha->disco == 0)
    {
        printf("\n Pilha vazia \n\n Aperte qualquer tecla para continuar ... \n ");
        fflush(stdin);
        getchar();
        return -1;
    }
    return pilha->QuantidadeDeDiscos[--pilha->disco]; // retorna a pilha ja fazendo o decremento da mesma
}

void empilharDiscos(tipoPilha *pilha, int parametro)
{
    if (pilha->disco == 7)
    {
        printf("\n Limite da pilha atingido \n\n Aperte qualquer tecla para continuar ... \n ");
        fflush(stdin);
        getchar();

        return;
    }
    pilha->QuantidadeDeDiscos[pilha->disco++] = parametro;
}

int tamanho(tipoPilha *pilha)
{
    return pilha->disco;
}

int topoDaPilha(tipoPilha *pilha)
{

    return pilha->QuantidadeDeDiscos[pilha->disco - 1];
}

void exibir(tipoPilha *pilha)
{

    printf(" [ ");
    for (size_t i = 0; i < pilha->disco; i++)
    {
        printf(" %d ", pilha->QuantidadeDeDiscos[i]);
    }
    printf(" ] \n ");
}

void invertePilha(tipoPilha *pilha)
{
    int j;
    int temporario;

    for (size_t i = 0; j = pilha->disco - 1; i++, j--)
    {
        temporario = pilha->QuantidadeDeDiscos[i];
        pilha->QuantidadeDeDiscos[i] = pilha->QuantidadeDeDiscos[j];
        pilha->QuantidadeDeDiscos[j] = temporario;
    }
}

int inicializarPilha(tipoPilha *primeiraPino, int *discos)
{
    printf("\n TORRE DE HANOI \n\n ");

    printf("\n A torre de Hanói consiste em passar todos os discos da torre [ A ] para a torre [ C ] sem que um disco maior fique em cima de um menor.\n\n");

    int auxiliar = *discos;

    while (auxiliar > 0)
    {
        empilharDiscos(primeiraPino, auxiliar);

        auxiliar = auxiliar - 1;
    }
    return 2;
}

void terminarJogo(tipoPilha *primeiroPino, tipoPilha *segundoPino, tipoPilha *terceiroPino)
{
    destruirPilha(primeiroPino);
    destruirPilha(segundoPino);
    destruirPilha(terceiroPino);
}

int mover(tipoPilha *origem, tipoPilha *destino)
{
    if (tamanho(origem) > 0 && (tamanho(destino) <= 0 || topoDaPilha(origem) < topoDaPilha(destino)))
    {
        empilharDiscos(destino, desempilharDiscos(origem));
        return 1;
    }
    else
    {
        printf("\n Infelizmente não é possível fazer este movimento. \n\n Aperte qualquer tecla para continuar ... \n ");
        fflush(stdin);
        getchar();

        return 0;
    }
}

int moveDiscos(tipoPilha *primeiroPino, tipoPilha *segundoPino, tipoPilha *terceiroPino)
{
    int cont = 0;

    tipoPontos *pontos;
    pontos = (tipoPontos *)malloc(sizeof(tipoPontos));

    tipoFila *fila;
    fila = iniciaFilaDeJogadores();

    tipoJogador *jogador;

    jogador = (tipoJogador *)malloc(sizeof(tipoJogador));

    char fazerMovimento[3] = {0, 0, '\0'};

    exibeFila(fila);

    printf("\n Informe seu movimento -> \n\n ");

    fflush(stdin);
    scanf("%c %c", fazerMovimento, fazerMovimento + 1);

    printf("\n\n ");

    switch (fazerMovimento[0])
    {
    case 'A':

        switch (fazerMovimento[1])
        {

        case 'B':

            if (mover(primeiroPino, segundoPino) == 0)
            {

                return 4;
            }
            break;

        case 'C':

            if (mover(primeiroPino, terceiroPino) == 0)
            {
                jogador->jogadas++;
                pontuacaoPositiva(pontos);
                return 4;
            }
            break;

        default:

            printf("\n Movimento invalido. \n\n Aperte qualquer tecla para continuar ... \n ");
            fflush(stdin);
            getchar();

            return 4;
        }
        break;

    case 'B':

        switch (fazerMovimento[1])
        {

        case 'A':

            if (mover(segundoPino, primeiroPino) == 0)
            {
                return 4;
            }
            break;

        case 'C':

            if (mover(segundoPino, terceiroPino) == 0)
            {
                jogador->jogadas++;
                pontuacaoPositiva(pontos);
                return 4;
            }
            break;

        default:

            printf("\n Movimento invalido. \n\n Aperte qualquer tecla para continuar ... \n ");
            fflush(stdin);
            getchar();

            return 4;
        }

        break;

    case 'C':

        switch (fazerMovimento[1])
        {

        case 'A':

            if (mover(terceiroPino, primeiroPino) == 0)
            {
                jogador->jogadas++;
                pontuacaoNegativa(pontos);

                return 4;
            }
            break;

        case 'B':

            if (mover(terceiroPino, segundoPino) == 0)
            {

                jogador->jogadas++;
                pontuacaoNegativa(pontos);
                return 4;
            }
            break;

        default:

            printf("\n Movimento invalido. \n\n Aperte qualquer tecla para continuar ... \n ");
            fflush(stdin);
            getchar();

            return 4;
        }

        break;

    default:

        printf("\n Movimento invalido. \n\n Aperte qualquer tecla para continuar ... \n ");
        fflush(stdin);
        getchar();

        return 4;
        break;
    }
    return 5;
}

void exibirPinos(tipoPilha *primeiroPino, tipoPilha *segundoPino, tipoPilha *terceiroPino)
{
    printf("\n--------------------------\n");
    printf(" -> A : ");
    exibir(primeiroPino);

    printf(" -> B : ");
    exibir(segundoPino);

    printf(" -> C : ");
    exibir(terceiroPino);
    printf("\n--------------------------\n");
}

void informarPossibilidades(tipoPilha *primeiroPino, tipoPilha *segundoPino, tipoPilha *terceiroPino)
{
    printf("\n\n Esses são os movimentos que voce pode fazer : ");

    if ((topoDaPilha(primeiroPino) < topoDaPilha(segundoPino) || tamanho(segundoPino) == 0) && tamanho(primeiroPino) > 0)
    {
        printf(" A para B ");
    }
    if ((topoDaPilha(primeiroPino) < topoDaPilha(terceiroPino) || tamanho(terceiroPino) == 0) && tamanho(primeiroPino) > 0)
    {
        printf(" A para C ");
    }
    if ((topoDaPilha(segundoPino) < topoDaPilha(primeiroPino) || tamanho(primeiroPino) == 0) && tamanho(segundoPino) > 0)
    {
        printf(" B para A ");
    }
    if ((topoDaPilha(segundoPino) < topoDaPilha(terceiroPino) || tamanho(terceiroPino) == 0) && tamanho(segundoPino) > 0)
    {
        printf(" B para C ");
    }
    if ((topoDaPilha(terceiroPino) < topoDaPilha(primeiroPino) || tamanho(primeiroPino) == 0) && tamanho(terceiroPino) > 0)
    {
        printf(" C para A ");
    }
    if ((topoDaPilha(terceiroPino) < topoDaPilha(segundoPino) || tamanho(segundoPino) == 0) && tamanho(terceiroPino) > 0)
    {
        printf(" C para B ");
    }
    printf("\n");
}

//////////////////////////////    PT 2     ///////////////////////////////////////////////////////

tipoFila *iniciaFilaDeJogadores()
{
    tipoFila *fila;
    fila = (tipoFila *)malloc(sizeof(tipoFila));

    fila->quantidade = 0;
    fila->contadorDeCodigo = 1;

    fila->primeiro = NULL;
    fila->ultimo = NULL;

    return fila;
}

tipoListaDePontos *iniciaListaDePontos()
{
    tipoListaDePontos *lista;
    lista = (tipoListaDePontos *)malloc(sizeof(tipoListaDePontos));

    lista->quantidade = 0;

    lista->primeiro = NULL;
    lista->ultimo = NULL;

    return lista;
}

void preencheMonge(tipoJogador *itemNovo, int codigo)
{
    itemNovo->codigo = codigo;

    tipoPontos *pontuacao;

    pontuacao = (tipoPontos *)malloc(sizeof(tipoPontos));

    pontuacao->pontuacao = 0;

    itemNovo->jogadas = 0;

    printf("\n Informe o nome do monge : ");
    fflush(stdin);
    fgets(itemNovo->nomeDoMonge, 100, stdin);
}

void exibeUmMonge(tipoJogador *itemTemporario)
{
    tipoPontos *listaDePontos;

    listaDePontos = (tipoPontos *)malloc(sizeof(tipoPontos));

    listaDePontos = iniciaListaDePontos();

    printf("\n-------------RELATÓRIO---------------\n");
    printf("\n Código      ->    %d \n", itemTemporario->codigo);
    printf("\n Nome        ->    %s   ", itemTemporario->nomeDoMonge);
    printf("\n Jogadas     ->    %d \n", itemTemporario->jogadas);
    printf("\n Pontos      ->    %d \n", listaDePontos->pontuacao);
    printf("---------------------------------------\n");
}

void exibeFila(tipoFila *fila)
{
    if (fila->quantidade == 0 || fila->primeiro == NULL)
    {
        printf("\n");
        return;
    }
    if (fila->quantidade == 1 || fila->primeiro == fila->ultimo)
    {
        //só tem uma pessoa na fila
        exibeUmMonge(fila->primeiro);
        return;
    }
    if (fila->quantidade > 1)
    {
        //tem mais de uma pessoa na fila
        tipoJogador *itemAtual;
        itemAtual = fila->primeiro;
        while (itemAtual != NULL)
        {
            exibeUmMonge(itemAtual);
            itemAtual = itemAtual->deTras;
        }
    }
}

int pontuacaoPositiva(tipoPontos *pontos)
{
    pontos->pontuacao += 3;
    printf("\n +3 pontos \n\n");
}

int pontuacaoNegativa(tipoPontos *pontos)
{
    pontos->pontuacao -= 3;
    printf("\n -3 pontos \n\n");
}

///// REMOVER O JOGADOR DA FILA E INSERE NA LISTA DE JOGADORES QUE JA JOGARAM

void insereNaFilaDeJogadores(tipoFila *fila)
{
    tipoJogador *elementoNovo;
    elementoNovo = (tipoJogador *)malloc(sizeof(tipoJogador));

    preencheMonge(elementoNovo, fila->contadorDeCodigo);

    if (fila->primeiro == NULL)
    {

        fila->primeiro = elementoNovo;
        fila->ultimo = elementoNovo;
        elementoNovo->deTras = NULL;
        elementoNovo->daFrente = NULL;
    }
    else
    {

        elementoNovo->daFrente = fila->ultimo;
        fila->ultimo->deTras = elementoNovo;
        elementoNovo->deTras = NULL;
        fila->ultimo = elementoNovo;
    }
    fila->quantidade++;
    fila->contadorDeCodigo++;
}

tipoJogador *removeDaFila(tipoFila *fila)
{
    //e se não tem ninguém na fila
    if (fila->primeiro == NULL /*fila->quantidade == 0*/)
    {
        printf("Lista vazia!\n");
        return NULL;
    }

    tipoJogador *enderecoDoRemovido;
    enderecoDoRemovido = fila->primeiro;

    if (fila->quantidade == 1)
    {
        //só tem uma pessoa
        fila->primeiro = NULL;
        fila->ultimo = NULL;
        fila->quantidade--;
        return enderecoDoRemovido;
    }
    if (fila->quantidade > 1)
    {
        //tem mais de uma pessoa na fila
        tipoJogador *primeiroDaFila;
        tipoJogador *segundoDaFila;

        primeiroDaFila = fila->primeiro;
        segundoDaFila = primeiroDaFila->deTras; //essa linha e a de baixo são iguais
        segundoDaFila = fila->primeiro->deTras; //essa linha e a de cima são iguais

        segundoDaFila->daFrente = NULL;
        fila->primeiro = segundoDaFila;
        fila->quantidade--;
        return enderecoDoRemovido;
    }
}

tipoListaDeJogadores *iniciaListaDeJogadores()
{
    tipoListaDeJogadores *fila;
    fila = (tipoListaDeJogadores *)malloc(sizeof(tipoListaDeJogadores));
    //trata das variáveis
    fila->quantidade = 0;
    fila->primeiro = NULL;
    fila->ultimo = NULL;
    fila->codigoAtual = 1;

    return fila;
}

void insereNoFinalDaLista(tipoListaDeJogadores *lista, tipoJogador *itemNovo)
{
    itemNovo->daFrente = NULL;
    itemNovo->deTras = NULL;
    itemNovo->codigo = lista->codigoAtual;

    if (lista->quantidade == 0)
    {
        //lista está vazia
        lista->primeiro = itemNovo; //é o primeiro da lista
        itemNovo->deTras = NULL;    //esse sujeito também não tem um>deTras (por ser o primeiro)
    }
    else
    {
        //já temos elementos na lista
        //faremos o último>deTras apontar para o novo
        lista->ultimo->daFrente = itemNovo;
        itemNovo->deTras = lista->ultimo;
    }
    lista->ultimo = itemNovo; //temos um novo último na lista

    lista->quantidade++;
    lista->codigoAtual++;
}

void exibeLista(tipoListaDeJogadores *lista)
{
    system("cls");
    if (lista->quantidade == 0)
    {
        printf("\n  Nenhum jogador na lista de jogadores ");
        return;
    }
    tipoJogador *itemTemporario;
    itemTemporario = lista->primeiro;
    while (itemTemporario != NULL)
    {
        exibeUmMonge(itemTemporario);
        itemTemporario = itemTemporario->daFrente;
    }
}