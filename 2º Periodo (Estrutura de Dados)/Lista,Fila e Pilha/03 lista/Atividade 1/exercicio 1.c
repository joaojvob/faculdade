#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct serie
{

    char nome[50];
    int codigo;
    int quantidadeDeTemporadas;
    int quantidadeDeEpisodios;
    float duracaoDeCadaEP;
    struct serie *proximo;

} tipoSerie;

int main()
{

    tipoSerie *primeiraSerie;
    tipoSerie *serieAtual;
    tipoSerie *novaSerie;

    primeiraSerie = (tipoSerie *)malloc(sizeof(tipoSerie));

    serieAtual = primeiraSerie;

    serieAtual->proximo = NULL;
    serieAtual->codigo = 1;

    printf("\n-----------------------------------\n");

    printf("\n Cadastrando serie do codigo = %d \n", serieAtual->codigo);

    printf("\n Nome da serie : ");
    fflush(stdin);
    fgets(serieAtual->nome, 50, stdin);

    printf("\n Quantidade de temporadas : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : ");
    fflush(stdin);
    scanf("%f", &serieAtual->duracaoDeCadaEP);

    printf("\n-----------------------------------\n");

    serieAtual->codigo = 2;
    printf("\n Cadastrando serie do codigo = %d \n", serieAtual->codigo);

    primeiraSerie = (tipoSerie *)malloc(sizeof(tipoSerie));

    serieAtual->proximo = NULL;

    printf("\n Nome da serie : ");
    fflush(stdin);
    fgets(serieAtual->nome, 50, stdin);

    printf("\n Quantidade de temporadas : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : ");
    fflush(stdin);
    scanf("%f", &serieAtual->duracaoDeCadaEP);

    printf("\n-----------------------------------\n");

    serieAtual->codigo = 3;
    printf("\n Cadastrando serie do codigo = %d \n", serieAtual->codigo);

    primeiraSerie = (tipoSerie *)malloc(sizeof(tipoSerie));

    serieAtual->proximo = NULL;

    printf("\n Nome da serie : ");
    fflush(stdin);
    fgets(serieAtual->nome, 50, stdin);

    printf("\n Quantidade de temporadas : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : ");
    fflush(stdin);
    scanf("%f", &serieAtual->duracaoDeCadaEP);

    printf("\n-----------------------------------\n");

    serieAtual->codigo = 4;
    printf("\n Cadastrando serie do codigo = %d \n", serieAtual->codigo);

    primeiraSerie = (tipoSerie *)malloc(sizeof(tipoSerie));

    serieAtual->proximo = NULL;

    printf("\n Nome da serie : ");
    fflush(stdin);
    fgets(serieAtual->nome, 50, stdin);

    printf("\n Quantidade de temporadas : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : ");
    fflush(stdin);
    scanf("%f", &serieAtual->duracaoDeCadaEP);

    printf("\n-----------------------------------\n");

    serieAtual->codigo = 5;
    printf("\n Cadastrando serie do codigo = %d \n", serieAtual->codigo);

    primeiraSerie = (tipoSerie *)malloc(sizeof(tipoSerie));

    serieAtual->proximo = NULL;

    printf("\n Nome da serie : ");
    fflush(stdin);
    fgets(serieAtual->nome, 50, stdin);

    printf("\n Quantidade de temporadas : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : ");
    fflush(stdin);
    scanf("%d", &serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : ");
    fflush(stdin);
    scanf("%f", &serieAtual->duracaoDeCadaEP);

    printf("\n\n");

    printf("\n________________________\n");
    printf("   Exibindo as series ");
    printf("\n________________________\n");

    serieAtual = primeiraSerie;

    printf("\n-----------------------------------\n");

    printf("\n Exibindo serie do codigo = %d \n", serieAtual->codigo);

    printf("\n Nome da serie : %s ", serieAtual->nome);

    printf("\n Quantidade de temporadas : %d ", serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : %d ", serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : %.2f ", serieAtual->duracaoDeCadaEP);

    serieAtual = serieAtual->proximo;

    printf("\n-----------------------------------\n");

    printf("\n Exibindo serie do codigo = %d \n", serieAtual->codigo);

    printf("\n Nome da serie : %s ", serieAtual->nome);

    printf("\n Quantidade de temporadas : %d ", serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : %d ", serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : %.2f ", serieAtual->duracaoDeCadaEP);

    serieAtual = serieAtual->proximo;

    printf("\n-----------------------------------\n");

    printf("\n Exibindo serie do codigo = %d \n", serieAtual->codigo);

    printf("\n Nome da serie : %s ", serieAtual->nome);

    printf("\n Quantidade de temporadas : %d ", serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : %d ", serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : %.2f ", serieAtual->duracaoDeCadaEP);

    serieAtual = serieAtual->proximo;

    printf("\n-----------------------------------\n");

    printf("\n Exibindo serie do codigo = %d \n", serieAtual->codigo);

    printf("\n Nome da serie : %s ", serieAtual->nome);

    printf("\n Quantidade de temporadas : %d ", serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : %d ", serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : %.2f ", serieAtual->duracaoDeCadaEP);

    serieAtual = serieAtual->proximo;

    printf("\n-----------------------------------\n");

    printf("\n Exibindo serie do codigo = %d \n", serieAtual->codigo);

    printf("\n Nome da serie : %s ", serieAtual->nome);

    printf("\n Quantidade de temporadas : %d ", serieAtual->quantidadeDeTemporadas);

    printf("\n Quantidade de episodios por temporada : %d ", serieAtual->quantidadeDeEpisodios);

    printf("\n Duração de cada episodio : %.2f ", serieAtual->duracaoDeCadaEP);
}