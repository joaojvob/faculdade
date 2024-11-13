#include "estruturas.h"

tipoPilha *iniciaPilha()
{
    tipoPilha *pilha;

    pilha = (tipoPilha *)malloc(sizeof(tipoPilha));

    pilha->base = NULL;

    pilha->topo = NULL;
    pilha->codigo = 0;
    pilha->quantidade = 0;

    return pilha;
}

void cadastrarLivro(tipoLivro *livroNovo, int id)
{
    livroNovo->codigo = id;
    printf("\n Informe o nome do livro : ");
    fflush(stdin);
    fgets(livroNovo->titulo, 100, stdin);

    printf("\n Informe o nome do autor do livro : ");
    fflush(stdin);
    fgets(livroNovo->autor, 100, stdin);
}

void exibeLivros(tipoLivro *item)
{
    printf("\n-------------------\n");
    printf("\n ID    : %d ", item->codigo);
    printf("\n Título: %s ", item->titulo);
    printf("\n-------------------\n");
}

void insereNaPilha(tipoPilha *pilha)
{

    tipoLivro *livroNovo;
    livroNovo = (tipoLivro *)malloc(sizeof(tipoLivro));

    cadastrarLivro(livroNovo, pilha->codigo + 1);
    if (pilha->quantidade == 0)
    {
        pilha->base = livroNovo;
        livroNovo->deBaixo = NULL;
    }
    else
    {
        livroNovo->deBaixo = pilha->topo;
    }
    pilha->topo = livroNovo;
    pilha->quantidade++;
    pilha->codigo++;
}

void exibeTopoDaPilha(tipoPilha *pilha)
{
    char opcao;

    if (pilha->quantidade == 0)
    {
        printf("\n Não há livros sendo lidos \n ");
        return;
    }
    if (pilha->quantidade == 1)
    {
        exibeLivros(pilha->topo);
        return;
    }

    tipoLivro *auxiliar = pilha->topo;

    exibeLivros(auxiliar);
}

void lerLivro(tipoPilha *pilha)
{
    char opcao;

    if (pilha->quantidade == 0)
    {
        printf("\n Não há mais livros na pilha \n ");
        return;
    }
    if (pilha->quantidade == 1)
    {
        free(pilha->topo);
        pilha->topo = NULL;
        pilha->base = NULL;
        pilha->quantidade = 0;
        printf("\n  Não há livros na pilha \n ");
        return;
    }

    tipoLivro *novoTopo = pilha->topo;

    while (novoTopo != NULL)
    {
        printf("\n Lendo livro que esta no topo da pilha ");
        for (size_t i = 0; i < 5; i++)
        {
            printf(".");
            sleep(1);
        }

        exibeTopoDaPilha(pilha);

        novoTopo = novoTopo->deBaixo;
        free(pilha->topo);
        pilha->topo = novoTopo;
        pilha->quantidade--;

        printf("\n Deseja ler outro livro ?? \n  S or N \n ");
        fflush(stdin);
        scanf("%c", &opcao);

        if (opcao == 's' || opcao == 'S')
        {
            /*
            printf("\n Lendo livro que esta no topo da pilha ");
            for (size_t i = 0; i < 5; i++)
            {
                printf(".");
                sleep(1);
            }

            exibeTopoDaPilha(pilha);

            free(pilha->topo);
            pilha->topo = novoTopo;
            pilha->quantidade--;
            novoTopo = novoTopo->deBaixo;

            //  novoTopo = novoTopo->deBaixo;
            // exibeTopoDaPilha(pilha);
            //removeTopoDaPilha(pilha);
            */
        }
        if (opcao == 'n' || opcao == 'N')
        {
            return;
        }
    }
}

void removeTopoDaPilha(tipoPilha *pilha)
{
    if (pilha->quantidade == 0)
    {
        printf("\n A pilha esta vazia ");
        return;
    }
    if (pilha->quantidade == 1)
    {
        free(pilha->topo);
        pilha->topo = NULL;
        pilha->base = NULL;
        pilha->quantidade = 0;
        printf("\n Pilha vazia! \n");
        return;
    }

    tipoLivro *novoTopo;

    novoTopo = pilha->topo->deBaixo;
    free(pilha->topo);
    pilha->topo = novoTopo;
    pilha->quantidade--;
}