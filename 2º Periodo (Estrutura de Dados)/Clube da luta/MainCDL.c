#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Clube.h"




int main(){
	setlocale(LC_ALL,"portuguese");
	
	tipoClube clube;

	
	char menu;
	int i;
	int atual;
	int clubeJaCadastrado = 0;

	
	do{
		printf("\n\t _________________ ");
		printf("\n\t|                 |");		
		printf("\n\t|   !! MENU !!    |");
		printf("\n\t|_________________|");
		printf("\n\n");
		printf("\n 1- Cadastrar Clube ");
		printf("\n 2- Informações Do Clube ");
		printf("\n 3- Cadastrar Membros");
		printf("\n 4- Exibir Membros");
		printf("\n 5- Exibir Informações Dos Membros");
		printf("\n 6- Lutar");
		printf("\n 0- Sair \n ");
		fflush(stdin);
		scanf("%c",&menu);
		
		
		switch(menu){
			
			case '0':{
				printf("\n ADIOS MINHA AMG <3.........");
				exit(0);
				break;
			}
			
			
			case '1':{
				
				cadastraClube(&clube);
	
				clubeJaCadastrado = 1;
				fflush(stdin);
				getchar();
				
				break;
			}
			
			case '2':{
				
				if(clubeJaCadastrado == 0){
					printf(" É necessário primeiramente cadastrar o clube  <(0v0)> \n");
					fflush(stdin);
					getchar();
				}else{

					exibeInformacoesClube(&clube);
					fflush(stdin);
					getchar();
				}
		
				break;
			}
			
			case '3':{
							
				if(clubeJaCadastrado == 0){
					printf(" É necessário primeiramente cadastrar o clube  <(0v0)> \n");
					fflush(stdin);
					getchar();
				}
				else{

					atual = clube.quantidadeMembros;

					cadastraMembro(&clube.membro[atual], atual+1);
					clube.quantidadeMembros++;

					fflush(stdin);
					getchar();

				}				
							
							
								
				break;
			}
		
			case '4':{
					
				
					
				for(i = 0 ; i < clube.quantidadeMembros ; i++){
					
					atual = clube.quantidadeMembros;
					
					exibirMembros(&clube.membro[i], i+1);
					
				}
				
				if(clube.quantidadeMembros == 0){
					
					printf("\n Nenhum membro cadastrado ;-;\n");
					
				}
				
				fflush(stdin);
				getchar();

				
				break;
			}
		
			case '5':{

				

				for(i = 0 ; i < clube.quantidadeMembros ; i++){
					
					atual = clube.quantidadeMembros;
					
					exibeDetalhes(&clube.membro[i], i+1);
				}
				
				if(clube.quantidadeMembros == 0){
					
					printf("\n Nenhum membro cadastrado ;-; \n");
					
				}
				
				fflush(stdin);
				getchar();
				

				break;
			}
			
		
			case '6':{
				
				
				organizarLutas(&clube);
				fflush(stdin);
				getchar();
				break;

				
				
				break;
			}
		
			default:
				printf("\n\n");
				printf("Opção Inválida!\n");
				printf("\n\n");
				break;			
			
			
		}
			
	}while(menu !=0 );
	
	return 0;
}
