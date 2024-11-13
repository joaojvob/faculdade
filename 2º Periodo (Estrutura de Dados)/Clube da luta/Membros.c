#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Clube.h"





void cadastraMembro(tipoMembro *membros, int codigo){
	

	setlocale(LC_ALL,"portuguese");
	
		printf("\n\n");
	
		printf(" <-><-><-> Membro %d <-><-><-> ", codigo);
	
		printf("\n\n");
	
//		printf("\n ID : ");
//		fflush(stdin);
//		scanf("%d",&membros->id);
	 
		printf("\n Nome : ");
		fflush(stdin);
		fgets(membros->nome,200,stdin);
	
		printf("\n Nascimento : ");
		fflush(stdin);
		fgets(membros->nascimento,11,stdin);
	
		printf("\n Nacionalidade : ");
		fflush(stdin);
		fgets(membros->nacionalidade,100,stdin);
	
		printf("\n Altura : ");
		fflush(stdin);
		scanf("%f",&membros->altura);
	
		printf("\n Peso : ");
		fflush(stdin);
		scanf("%f",&membros->peso);
	
	
		membros->id			= codigo;
		membros->lutas		= 0;
		membros->vitorias 	= 0;
	
	
		printf("\n\n");
	

	
}


//
//Exibe  Membros Resumo
//

void exibirMembros(tipoMembro *membros,int codigo){
	setlocale(LC_ALL,"portuguese");
	
	float percentualLutador = 0;
	int derrotas = membros->lutas-membros->vitorias;
	
	if(membros->lutas == 0){
		percentualLutador = 0.0;
	}
	else{
		percentualLutador = (100*membros->vitorias)/(membros->vitorias+derrotas);
	}
		
	printf("\n\n");
	
	printf(" <-><-><->  Membro  [%d] <-><-><-> ",codigo);
	
	printf("\n\n");
	
	printf(" ID : %d \n",membros->id);

	printf("\n Nome : %s \n",membros->nome);
	
	printf(" Vitorias : %d \n",membros->nocautes);
	
	printf("\n Derrotas : %d \n",membros->derrotas);
	
	printf("\n Percentual do lutador : %.2f \n",percentualLutador);
	
	printf("\n\n");
	
	membros->id			= codigo;

}

//
//Exibe informacoes dos Membros
//

void exibeDetalhes(tipoMembro *membros,int codigo){
	setlocale(LC_ALL,"portuguese");
	

	
		printf("\n\n");
	
		printf(" <-><-><-> Informarções do Membro [%d] <-><-><-> ",codigo);
	
		printf("\n\n");
	
		printf(" ID : %d \n",membros->id);

		printf("\n Nome : %s ",membros->nome);

		printf("\n Nascimento : %s ",membros->nascimento);
	
		printf("\n Nacionalidade : %s ",membros->nacionalidade);
	
		printf("\n Altura : %.2fm \n",membros->altura);

		printf("\n Peso : %.2fkg \n",membros->peso);
	
		printf("\n\n");

		
		membros->id			= codigo;
}
