#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Estruturas.h"



int main(){
	
	int quantidade = 4;
	int i;
	char opcao;
	int cont=0;
	tipoEmpresa *vetor;
	
	vetor = malloc(quantidade*sizeof(tipoEmpresa));
	
	
	do{
		
		printf("\n 1- Cadastrar empresa ");
		printf("\n 2- Exibir empresa \n ");
		fflush(stdin);
		scanf("%c",&opcao);
		
		switch(opcao){
			
			case '0':{
				
				exit(1);
				
				break;
			}
			
			case '1':{
				cont++;
					
				if(cont > quantidade ){
					printf("\n limite atingido :;-;");
				}else{
					
				
				
				for(i=0; i<quantidade; i++){
		
					printf(" \n <><> Cadastro [n %d] <><> ",i+1);
             
					Cadastro(&vetor[i]);

					getchar();	
							
		
				}
				
					printf("\n ______________________________");
				}
				break;
			}
			
			
			
			case '2':{
				
				if(cont == 0){
					printf("\n Nenhuma empresa cadastrada \n");
					fflush(stdin);
					getchar();
					
				}else{
				
			
				for(i=0; i<quantidade; i++){
		
					printf("\n _______ %dº Empresa _________",i+1);
						
					Exibir(&vetor[i]);			
		
				}				
					printf("\n ______________________________\n");
				
				break;
				}
			}
			
			default:
			
				printf("\n opcao invalida");
		}
		
		
	}while (opcao);
	
	
	
	return 0;
}
