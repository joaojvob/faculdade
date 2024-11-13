#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Estruturas.h"


int main() {
	setlocale(LC_ALL,"portuguese");
	
	char opcao;
	int quantidade=0;
	int mensagemJaEnvidada=0;
	int i;
	tipoSMS *vetor;
	
	printf("\n Quantas mensagens deseja envidar ? ");
	fflush(stdin);
	scanf("%d",&quantidade);
	
	vetor = malloc(quantidade*sizeof(tipoSMS));	
	
	
	do{
		printf("\n\t _________________ ");
		printf("\n\t|                 |");		
		printf("\n\t|   !! MENU !!    |");
		printf("\n\t|_________________|");
		printf("\n\n");
		printf("\n 0- Sair  ");		
		printf("\n 1- Cadastrar SMS ");
		printf("\n 2- Exibir SMS \n ");
		fflush(stdin);
		scanf("%c",&opcao);
		
		
		switch(opcao){
			
			case '0':{
				
				printf("\n ADIOS S2");
				exit(1);
					
				
				break;
			}
			
			
			case '1':{
				
					mensagemJaEnvidada++;
					if(quantidade == 0){
					
						printf("\n Nenhuma mensagem cadastrada ....");
					
					}if(mensagemJaEnvidada > quantidade){
							
						printf("\n Limite de mensagem atingido ....");
							
					}else{					
						for(i=0; i<quantidade; i++){
					
							printf(" \n [%dº] -> Mensagem",i+1);
							
							sms(&vetor[i]);
					
							fflush(stdin);
							getchar();
					}
					
					}

					
					
				break;
				
			}
			
			
			case '2':{
				
				if(quantidade == 0 ){
					printf("\n Não tem mensagem");
				}else{				
				
					for(i=0; i<quantidade; i++){
						printf(" \n [%dº] -> Mensagem",i+1);
						exibirSMS(&vetor[i]);
					}
				
				}
				break;
			}
			
			default:
				printf("\n Opção invalida \n");
			
		}
		
		
		
	}while (opcao);
	
	free(vetor);
	
	return 0;
}
