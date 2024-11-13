
typedef struct filme {
	char tituloDoFilme[100];
	int anoDoLancamento;
	int numeroDoEpisodio;
}tipoFilme;

void cadastraFilme(tipoFilme *StarWars);
void exibiFilme(tipoFilme *StarWars);
