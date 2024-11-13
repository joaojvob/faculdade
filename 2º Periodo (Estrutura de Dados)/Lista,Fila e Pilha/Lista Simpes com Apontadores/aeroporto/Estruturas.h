
typedef struct passageiros
{
	int id;
	char numeroDoPassaporte[8];
	char nomeDoPassageiro[100];
	char sexo[9];
	struct passageiros *proximo;

} tipoPassageiro;

typedef struct aviao
{
	int codigo;
	int poltronas;
	char nomeDaCompanhia[100];
	char origem[100];
	char destino[100];

	tipoPassageiro *passagem;

	struct aviao *proximo;

} tipoAviao;

typedef struct listaAviao
{
	int quantidade;

	tipoAviao *primeiro;
	tipoAviao *ultimo;
} tipoListaAviao;

typedef struct listaPassageiros
{
	int quantidade;

	tipoPassageiro *primeiroPassageiro;
	tipoPassageiro *ultimoPassageiro;

} tipoListaPassageiro;

//avioes

tipoListaAviao *iniciaListaAviao();

void cadastraAviao(tipoAviao *passagem, int codigo);

void inserirAviao(tipoListaAviao *lista);

void exibirListaDeAvioes(tipoListaAviao *lista);

// passageiros

tipoListaPassageiro *iniciaListaPassageiro();

void cadastrarPassageiro(tipoPassageiro *passagem, int codigo);

void inserirPassageiro(tipoListaPassageiro *lista);

void exibirPassageiros(tipoListaPassageiro *lista);
