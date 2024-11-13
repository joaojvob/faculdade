#include"estruturas.h"


//inicia a lista
tipoLista * iniciaLista(){
	tipoLista *lista;
	lista = (tipoLista *)malloc(sizeof(tipoLista));//aloca a lista
	//trata das variáveis
	lista->quantidade = 0;
	lista->primeiro = NULL;
	lista->ultimo = NULL;
	return lista;
}

void preencheVeiculo(tipoVeiculo *veiculoNovo, int codigo){
	
	veiculoNovo->codigo = codigo;
	printf("Informe o modelo\n");
	scanf(" %s", veiculoNovo->modelo);
	// printf("Informe o fabricante\n");
	// scanf(" %s", veiculoNovo->fabricante);
}

void insereNoFinalDaLista(tipoLista *lista){
	tipoVeiculo *veiculoAuxiliar;


	if(lista->quantidade==0){
		//lista está vazia
		veiculoAuxiliar = (tipoVeiculo *)malloc(sizeof(tipoVeiculo));//alocamos um veículo temporário
		lista->primeiro = veiculoAuxiliar;//colocamos esse veículo no começo e no final da lista
		lista->ultimo 	= veiculoAuxiliar;
	}
	else{
		//já temos elementos na lista
		veiculoAuxiliar = (tipoVeiculo *)malloc(sizeof(tipoVeiculo));
		//faremos o último anterior apontar para o novo
		lista->ultimo->proximo = veiculoAuxiliar;
		lista->ultimo = veiculoAuxiliar;//temos um novo último na lista
	}
	
	veiculoAuxiliar->proximo = NULL;
	lista->quantidade++;
	preencheVeiculo(veiculoAuxiliar,lista->quantidade);
}

void exibeListaCompleta(tipoLista *lista){
	if(lista->quantidade == 0){
		printf("A lista está vazia\n");
		return;
	}
	tipoVeiculo *veiculoAuxiliar;
	veiculoAuxiliar = lista->primeiro;
	while(veiculoAuxiliar != NULL){
		printf("\n\n");
		printf("\nCódigo 		= %d", veiculoAuxiliar->codigo);
		printf("\nModelo 		= %s", veiculoAuxiliar->modelo);
		printf("\nFabricante 	= %s", veiculoAuxiliar->fabricante);
		veiculoAuxiliar = veiculoAuxiliar->proximo;
	}


}


void removePrimeiroDaLista(tipoLista *lista){
	if(lista->quantidade == 0){
		printf("Não dá pra remover o que não existe!" );
		return;
	}
	tipoVeiculo *enderecoDoPrimeiro = lista->primeiro;
	
	printf("\n*** removendo o %s", enderecoDoPrimeiro->modelo);
	//mudando o apontador do primeiro
	lista->primeiro = lista->primeiro->proximo;//igual ao debaixo
	//lista->primeiro = enderecoDoPrimeiro->proximo;//igual ao de cima
	free(enderecoDoPrimeiro);
	lista->quantidade--;
}