#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "estruturas.h"

void cadastraFilme(tipoFilme *StarWars){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n");
	
	printf("\n Nome do epis�dio : ");
	fflush(stdin);
	fgets(StarWars->tituloDoFilme,100,stdin);
	
	
	printf("\n Ano de lan�amento : ");
	fflush(stdin);
	scanf("%d",&StarWars->anoDoLancamento);
	
	
	printf("\n N�mero do episodio : ");
	fflush(stdin);
	scanf("%d",&StarWars->numeroDoEpisodio);	
	
	
}


void exibiFilme(tipoFilme *StarWars){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n");

	
	printf("\n Nome do epis�dio   : %s ",StarWars->tituloDoFilme);	
	
	printf("\n Ano de lan�amento  : %d ",StarWars->anoDoLancamento);
		
	printf("\n N�mero do episodio : %d ",StarWars->numeroDoEpisodio);


	
}
