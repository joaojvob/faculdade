#include "estrutura.h"

void removeParteDaString(char *string, int inicio)
{
    char aux[250] = {};
    int i;
    int e;

    e = 0;

    i = inicio;

    while (string[i] != '\n')
    {
        aux[e] = string[i];
        e++;
        i++;
    }

    strcpy(string, aux);
}

int lerArquivo(tipoPessoa *pessoa, char *fileP)
{
    FILE *arquivo;
    FILE *arq;

    ArvoreTRIE *arvore = NULL;

    char linhaLida[250];
    int numeroLinha;
    int numeroPessoa = 1;
    int i;

    arquivo = fopen("cicmo.txt", "r");

    if (arquivo == NULL)
    {
        printf("Houve um erro ao abrir o arquivo.\n");
        return 1;
    }

    //  pessoa->id = 1;

    numeroLinha = 1;

    arq = fopen("arquivo.txt", "w+");

    while (!feof(arquivo))
    {

        fgets(linhaLida, 250, arquivo);

        if (numeroLinha == 1)
        {
        }
        else if (numeroLinha == 2)
        {

            removeParteDaString(linhaLida, 7);
            strcpy(pessoa->cpf, linhaLida);

            //     printf("\n antes de inserir na arvore \n");
            insereNaArvoreTrie(arvore, pessoa);

            fprintf(arq, " CPF          %s \n", pessoa->cpf);
        }
        else if (numeroLinha == 3)
        {

            removeParteDaString(linhaLida, 8);
            strcpy(pessoa->nome, linhaLida);

            fprintf(arq, " Nome         %s \n", pessoa->nome);
        }
        else if (numeroLinha == 4)
        {

            removeParteDaString(linhaLida, 12);
            strcpy(pessoa->endereco, linhaLida);

            fprintf(arq, " Endereço     %s \n", pessoa->endereco);
        }
        else if (numeroLinha == 5)
        {

            removeParteDaString(linhaLida, 12);
            strcpy(pessoa->telefone, linhaLida);

            fprintf(arq, " Telefone     %s \n", pessoa->telefone);
        }
        else if (numeroLinha == 6)
        {

            removeParteDaString(linhaLida, 15);
            strcpy(pessoa->observacoes, linhaLida);

            fprintf(arq, " Observações  %s \n\n", pessoa->observacoes);
        }
        else if (numeroLinha == 7)
        {
        }

        if (numeroLinha >= 7)
        {
            numeroLinha = 0;
            // pessoa->id++;
            numeroPessoa++;
        }

        numeroLinha++;
    }

    printf("\nLI TUDO MEU PATRÃO\n");

    printf("\n exibindo arvore \n");
    exibeArvore(arvore);
    printf("\n terminei de exibir a arvore \n");
}

//////////////////////////////////////// Arvore Trie ////////////////////////////////////////

int buscaBit(char dados, int posicao)
{
    return (dados >> (7 - posicao)) & 1;
}

ArvoreTRIE *insere(ArvoreTRIE *arv, tipoPessoa *dados, int posicao)
{
    ArvoreTRIE *novaPessoa;

    novaPessoa = malloc(sizeof(ArvoreTRIE));

    if (arv == NULL)
    {
        printf("\n arvore vazia, vou inserir com camarada agr \n");
        novaPessoa->esquerda = novaPessoa->direita = NULL;
        if (posicao == 8)
        {
            novaPessoa->pessoa = dados->cpf;
        }
        else
        {
            if (buscaBit(dados->cpf, posicao) == 0)
            {
                novaPessoa->esquerda = insere(novaPessoa->esquerda, dados->cpf, posicao + 1);
            }
            else
            {
                novaPessoa->direita = insere(novaPessoa->direita, dados->cpf, posicao + 1);
            }
        }
        return novaPessoa;
    }
    else
    {
        printf("\n arvore com uma ou mais pessoas, vou inserir mais um agr agr \n");
        if (buscaBit(dados->cpf, posicao) == 0)
        {
            arv->esquerda = insere(arv->esquerda, dados->cpf, posicao + 1);
            return arv;
        }
        else
        {
            arv->direita = insere(arv->direita, dados->cpf, posicao + 1);
            return arv;
        }
    }
}

ArvoreTRIE *insereNaArvoreTrie(ArvoreTRIE *arv, char dados)
{
    arv = insere(arv, dados, 0);
    return arv;
}

void exibeArvore(ArvoreTRIE *arv)
{
    if (arv != NULL)
    {
        exibeArvore(arv->esquerda);
        if ((arv->esquerda == NULL) && (arv->direita == NULL))
        {
            printf("\n %s ", arv->pessoa->cpf);
        }
        exibeArvore(arv->direita);
    }
}
