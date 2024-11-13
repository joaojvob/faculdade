
typedef struct funcionario
{

	char nome[100];
	int id;
	int pontos;
	int tdPontos;
	float venda;
	float total;
	float rendaPrimeiroMes;
	float rendaSegundoMes;
	float rendaTerceiroMes;
	struct funcionario *proximo;

} tipoFuncionario;

typedef struct lista
{

	int quantidade;

	tipoFuncionario *primeiro;

	tipoFuncionario *ultimo;

} tipoLista;

tipoLista *iniciaLista();

void cadastraFuncionario(tipoFuncionario *funcionario, int codigo);

void insereNoFinalDaLista(tipoLista *lista);

void exibeListaCompleta(tipoLista *lista);

int pontuacaoGeralDeCadaFuncionario(tipoLista *lista);

int pontuacaoGeral(tipoLista *lista);

float valorTotalVendido(tipoLista *lista);
