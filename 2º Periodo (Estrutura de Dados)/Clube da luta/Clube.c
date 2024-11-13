#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Clube.h"


//
//CADASTRA Clube
//

void cadastraClube(tipoClube *clube){
	setlocale(LC_ALL,"portuguese");
	
	int i;
	
	printf("\n\n");
	
	printf(" <-><-><-> club creation <-><-><-> ");
	
	printf("\n\n");
	
	printf(" ID : ");
	fflush(stdin);
	scanf("%d",&clube->id);
	
	printf("\n Nome : ");
	fflush(stdin);
	fgets(clube->nomeClube,200,stdin);
	
	printf("\n País de origem : ");
	fflush(stdin);
	fgets(clube->origem,200,stdin);
	
	printf("\n Endereço : ");
	fflush(stdin);
	fgets(clube->endereco,500,stdin);
	
	printf("\n Data de criação : ");
	fflush(stdin);
	fgets(clube->criacao,11,stdin);
	
	clube->quantidadeMembros = 0;
	
	printf("\n\n");
	
}

//
//EXIBE CLUBE
//

void exibeInformacoesClube(tipoClube *clube){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n\n");
	
	printf(" <-><-><-> Informações do clube <-><-><-> ");
	
	printf("\n\n");
	
	printf("\n ID : %d \n",clube->id);

	printf("\n Nome : %s ",clube->nomeClube);
	
	printf("\n País de origem : %s ",clube->origem);

	printf("\n Endereço : %s ",clube->endereco);

	printf("\n Data de criação : %s ",clube->criacao);
	
	printf("\n Membros ativos : %d ", clube->quantidadeMembros);
	
	printf("\n\n");

	
}

int organizarLutas(tipoClube *clube){
	setlocale(LC_ALL,"portuguese");

	int i;
	int numeroDaLuta=1;
	int vencedor;
	
	if(clube->quantidadeMembros <= 1){
		printf("\n Não tem lutadores suficientes para comerçamos ;-; \n ");
		return 0;
	}
	
	for(i=0; i<clube->quantidadeMembros; i+=2){
		if(i+1 >= clube->quantidadeMembros){
			
			return 0;
		}
		
		printf("\n\n");
		printf("  ------ ");
		printf("\n | Luta | -->[nº%d]<-- \n",numeroDaLuta);
		printf("  ------ ");
		getchar();
		printf("\n\n");
		printf("\n %s \n vs \n \n %s ",clube->membro[i].nome,clube->membro[i+1].nome);
		
		printf("\n\n Quem ganhou ? \n\n 1-> ~%s 2-> ~%s \n",clube->membro[i].nome,clube->membro[i+1].nome);
		scanf("%d",&vencedor);
		
		clube->membro[i].lutas++;
		clube->membro[i+1].lutas++;
		
		
		if(vencedor == 1){
			clube->membro[i].vitorias++;
			clube->membro[i].nocautes++;
			clube->membro[i+1].derrotas++;
		}
		else{

			clube->membro[i+1].vitorias++;
			clube->membro[i+1].nocautes++;
			clube->membro[i].derrotas++;
		}

		numeroDaLuta++;
	}
}

