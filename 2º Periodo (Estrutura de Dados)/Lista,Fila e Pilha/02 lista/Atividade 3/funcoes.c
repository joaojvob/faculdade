#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "estruturas.h"

void cadastraFilme(tipoFilme *StarWars){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n");
	
	printf("\n Nome do episódio : ");
	fflush(stdin);
	fgets(StarWars->tituloDoFilme,100,stdin);
	
	
	printf("\n Ano de lançamento : ");
	fflush(stdin);
	scanf("%d",&StarWars->anoDoLancamento);
	
	
	printf("\n Número do episodio : ");
	fflush(stdin);
	scanf("%d",&StarWars->numeroDoEpisodio);	
	
	
}


void exibiFilme(tipoFilme *StarWars){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n");

	
	printf("\n Nome do episódio   : %s ",StarWars->tituloDoFilme);	
	
	printf("\n Ano de lançamento  : %d ",StarWars->anoDoLancamento);
		
	printf("\n Número do episodio : %d ",StarWars->numeroDoEpisodio);


	
}
