#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TTDL 5999 // total de linhas
#define TTDP 857  // total de pessoas
#define MAX 4190  // total de linhas do arquivo 2

typedef struct dadosPessoa
{
    int id;
    char cpf[11];
    char nome[100];
    char endereco[250];
    char telefone[8];
    char observacoes[250];

} tipoPessoa;

void exibe(tipoPessoa *pessoa);

void removeParteDaString(char *string, int inicio);

int lerArquivo(tipoPessoa *pessoa, char *filepath);

void ordena(tipoPessoa **pessoa);

//////////////////////////////////////// Arvore Trie ////////////////////////////////////////

typedef struct no
{
    tipoPessoa *pessoa;
    struct no *esquerda;
    struct no *direita;
} ArvoreTRIE;

int buscaBit(char dados, int posicao);

ArvoreTRIE *insere(ArvoreTRIE *arv, tipoPessoa *dados, int posicao);

ArvoreTRIE *insereNaArvoreTrie(ArvoreTRIE *arv, char dados);

void exibeArvore(ArvoreTRIE *arv);
