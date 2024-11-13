#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "canal.h"


void cadastraCanal(tipoCanal *canal){
	setlocale(LC_ALL,"portuguese");
	
	
	
	printf("\n Titulo : ");
	fflush(stdin);
	fgets(canal->titulo,100,stdin);
	
	printf("\n ID : ");
	fflush(stdin);	
	scanf("%d",&canal->id);
	
	printf("\n Descrição : ");
	fflush(stdin);
	fgets(canal->descricao,100,stdin);
	
	printf("\n Proprietario : ");
	fflush(stdin);
	fgets(canal->proprietario,100,stdin);
	
	printf("\n Quantidade de inscritos : ");
	fflush(stdin);
	scanf("%d",&canal->quantidadeDeInscritos);
	
	
}


void exibiCanal(tipoCanal *canal){
	setlocale(LC_ALL,"portuguese");
	
	
	printf("\n Titulo : %s ",canal->titulo);
	
	printf("\n ID : %d ",canal->id);	
	
	printf("\n Descrição : %s ",canal->descricao);
	
	printf("\n Proprietario : %s ",canal->proprietario);

	printf("\n Quantidade de inscritos : %d ",canal->quantidadeDeInscritos);
	
	

}
