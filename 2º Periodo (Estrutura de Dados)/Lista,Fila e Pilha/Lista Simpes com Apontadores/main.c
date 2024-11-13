#include"estruturas.h"


int main(){

	int codigoTemporario = 1;
	int i, sair = 0, opcao;


	tipoLista *lista;
	
	//Cria lista vazia
	lista = iniciaLista();


	do{
		printf("\nESCOLHA\n");
		printf("1 - INSERIR NO FIM\n");
		printf("2 - EXIBIR TUDO\n");
		printf("3 - REMOVER PRIMEIRO\n");
		printf("* - SAIR\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				insereNoFinalDaLista(lista);
				break;
			case 2:
				exibeListaCompleta(lista);
				break;
			case 3:
				removePrimeiroDaLista(lista);
				break;
			default:
				sair = 1;
				break;
		}
	}while(sair != 1);
}