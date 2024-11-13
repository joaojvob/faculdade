#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "canal.h"


void cadastraVideo(tipoCanal *canal){
	setlocale(LC_ALL,"portuguese");
	
			
	printf("\n Titulo do video : ");
	fflush(stdin);
	fgets(canal->video.titulo,100,stdin);

	printf("\n Quantidade de visualizações : ");
	fflush(stdin);
	scanf("%d",&canal->video.visualizacoes);
	
}

void exibiVideo(tipoCanal *canal){
	setlocale(LC_ALL,"portuguese");
	
			
	printf("\n Titulo do video : %s ",canal->video.titulo);

	printf("\n Quantidade de visualizações : %d ",canal->video.visualizacoes);

	
}
