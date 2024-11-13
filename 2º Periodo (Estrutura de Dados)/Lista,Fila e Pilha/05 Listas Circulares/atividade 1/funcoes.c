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

void cadastraAnimal(tipoParque *animal, int codigo)
{
    animal->codigo = codigo;

    printf("\n Nome do animal : ");
    fflush(stdin);
    fgets(animal->nome, 100, stdin);
}

void exibeUmAnimal(tipoParque *animal)
{
    printf("\n________________________________\n ");
    printf("\n Código  ->    %d \n ", animal->codigo);
    printf("\n Nome    ->    %s \n ", animal->nome);
}

void insereNoFinalDaLista(tipoLista *lista)
{

    tipoParque *animalTEMP;

    animalTEMP = (tipoParque *)malloc(sizeof(tipoParque));

    cadastraAnimal(animalTEMP, lista->quantidade);

    if (lista->quantidade == 0)
    {
        animalTEMP->proximo = NULL;
        animalTEMP->anterior = NULL;

        lista->primeiro = animalTEMP;
        lista->ultimo = animalTEMP;
    }
    else
    {
        lista->ultimo->proximo = animalTEMP;
        animalTEMP->anterior = lista->ultimo;
        lista->ultimo = animalTEMP;
        animalTEMP->proximo = lista->primeiro;
        lista->primeiro->anterior = lista->ultimo;
    }
    lista->quantidade++;
}

void ligarBrinquedo(tipoLista *lista)
{
    int i;

    int quantidadeDeVoltas = 0;

    tipoParque *itemTEMP;
    itemTEMP = lista->primeiro;

    if (lista->quantidade == 0)
    {
        printf("\n\n >-< Lista vazia >-< \n\n");
        return;
    }

    printf("\n\n Quantidade de voltas \n -> ");
    fflush(stdin);
    scanf("%d", &quantidadeDeVoltas);

    for (i = 0; i < quantidadeDeVoltas; i++)
    {

        printf("\n\t Volta nº %d", i + 1);

        do
        {
            exibeUmAnimal(itemTEMP);
            sleep(1);
            itemTEMP = itemTEMP->proximo;

        } while (itemTEMP != lista->primeiro);
    }
}

void remove_o_PrimeiroAnimal(tipoLista *lista)
{
    if (lista->quantidade = 0)
    {
        printf("\n\n Lista vazia \n\n");
        return;
    }
    else if (lista->quantidade == 1)
    {
        free(lista->primeiro);
        lista->ultimo = NULL;
        lista->primeiro = NULL;
        lista->quantidade = 0;
        return;
    }
    else if (lista->quantidade == 2)
    {
        free(lista->primeiro);
        lista->ultimo->anterior = NULL;
        lista->ultimo->proximo = NULL;
        lista->quantidade = 1;
        lista->primeiro = lista->ultimo;
        return;
    }
    else
    {
        tipoParque *segundo;
        segundo = lista->primeiro->proximo;
        segundo->anterior = lista->ultimo;
        lista->ultimo->proximo = segundo;

        free(lista->primeiro);

        lista->primeiro = segundo;
        lista->quantidade--;
    }
}

void remove_o_UltimoAnimal(tipoLista *lista)
{
    if (lista->quantidade = 0)
    {
        printf("\n\n Lista vazia \n\n");
        return;
    }
    else if (lista->quantidade == 1)
    {
        free(lista->ultimo);
        lista->ultimo = NULL;
        lista->primeiro = NULL;
        lista->quantidade = 0;
        return;
    }
    else if (lista->quantidade == 2)
    {
        free(lista->ultimo);
        lista->primeiro->proximo = NULL;
        lista->primeiro->anterior = NULL;
        lista->quantidade--;
        return;
    }
    else
    {
        tipoParque *penultimo;
        penultimo = lista->ultimo->anterior;
        penultimo->proximo = lista->primeiro;
        lista->primeiro->anterior = penultimo;

        free(lista->ultimo);

        lista->ultimo = penultimo;
        lista->quantidade--;
    }
}

void removeQualquerAnimal(tipoLista *lista, char nome[100])
{
    tipoParque *parametro;
    parametro = lista->primeiro;
    while (parametro != lista->primeiro)
    {
        /* code */

        if (strcmp(parametro->nome, nome) == 0)
        {

            if (parametro == lista->primeiro)
            {
                printf("\n Removendo o animal -> %s ", parametro->nome);
                remove_o_PrimeiroAnimal(lista);
            }
            else if (parametro == lista->ultimo)
            {
                printf("\n Removendo o animal -> %s ", parametro->nome);
                remove_o_UltimoAnimal(lista);
            }
            else
            {
                printf("\n Removendo o animal -> %s ", parametro->nome);

                tipoParque *animalAnterior;
                animalAnterior = parametro->anterior;

                tipoParque *animalProximo;
                animalProximo = parametro->proximo;

                animalAnterior->anterior = animalAnterior;
                animalProximo->proximo = animalProximo;

                free(parametro);
                lista->quantidade--;
            }
        }
    }
}