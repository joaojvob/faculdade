#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "estruturas.h"


int main() {
	setlocale(LC_ALL,"portuguese");
	
	int vetor;
	int quantidade = 9;
	int opcao;
	int cont = 0;
	int cont2 = 0;	
	char i;
	
	tipoFilme *StarWars;
	
	StarWars = malloc(quantidade*sizeof(int));
	
	
	do{
		printf("\n 0- sair ");
		printf("\n 1- Cadastrar filme ");
		printf("\n 2- Exibir filme cadastrado \n ");
		fflush(stdin);
		scanf("%c",&opcao);
		
		switch(opcao){
			
			case '0' :{
				
				printf("\n adios...");
				exit(1);
				
				break;
			}
			
			case '1' :{
				
				for(i=0; i<quantidade; i++){
					printf("\n\n");
					printf("\n -> %dº filme ",i+1);
					
					cadastraFilme(&StarWars[i]);
					fflush(stdin);
					getchar();
				
					cont++;		
				}
				
				break;
			}
			
			case '2' :{
				cont2 ++;
				if(cont == 0){
					printf("\n Nenhum filme cadastrado..... \n ");
						getchar();
				}else{
				
				
				
					for(i=0; i<quantidade; i++){
						printf("\n\n");
						printf("\n -> %dº filme ",i+1);
						exibiFilme(&StarWars[i]);
					}
				
				printf("\n\n");
				}
			
				break;
			}
			
			default:
				printf("\n opção invalida");
			
		}
				
		
	}while(opcao);
	
		printf("\n adios....");
	
	
	
	
	free(StarWars);
	
	return 0;
}
