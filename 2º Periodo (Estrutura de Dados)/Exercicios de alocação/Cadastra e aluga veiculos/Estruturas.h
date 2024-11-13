
typedef struct
{

	char modelo[100];
	char placa[50];
	char situacaoDoVeiculo[50];
	float valorDaDiaria;
	float dias;
	int id;

} locadoraDeVeiculos;

void alugaVeiculo(locadoraDeVeiculos *aluga, int id);
void exibeVeiculoAlugado(locadoraDeVeiculos *exibe, int id);
float diariaDoVeiculo(locadoraDeVeiculos *diaria);
