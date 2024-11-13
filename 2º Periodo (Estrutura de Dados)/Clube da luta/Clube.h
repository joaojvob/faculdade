#include "Membros.h"

typedef struct clube{
	
	int id;
	int quantidadeMembros;
	char nomeClube[200];
	char endereco[500];
	char criacao[11];
	char origem[100];
	tipoMembro membro[50];
	
}tipoClube;


void cadastraClube(tipoClube *clube);

void exibeInformacoesClube(tipoClube *clube);

void exibirMembros(tipoMembro *detalhes, int codigo);

int organizarLutas(tipoClube *clube);
