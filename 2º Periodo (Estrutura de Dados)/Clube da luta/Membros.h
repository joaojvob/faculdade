
typedef struct membros{
	
	char nome[100];
	char nascimento[11];
	char nacionalidade[100];
	float altura;
	float peso;
	int id;
	int lutas;
	int vitorias;
	int derrotas;
	int nocautes;
	
}tipoMembro;

void cadastraMembro(tipoMembro *membros, int codigo);
void exibeDetalhes(tipoMembro *membros, int codigo);
