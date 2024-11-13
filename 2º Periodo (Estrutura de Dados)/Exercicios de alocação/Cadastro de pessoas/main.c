#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pessoa.h"

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	
	tipoPessoa *vetPessoa;
	
	int quantidade=0;
	int i;
	int codigo;
	int cont=0;
	int opcao;
	
	printf("\n Deseja cadastrar quantas pessoas ?  ");
	fflush(stdin);
	scanf("%d",&quantidade);

	vetPessoa = malloc(quantidade*sizeof(tipoPessoa));
	
	
	do{
		printf("\n 0 - Sair ");
		printf("\n 1 - Cadastra pessoa ");
		printf("\n 2 - Exibe pessoa ");
		printf("\n 3 - Edita pessoa \n ");
		
		fflush(stdin);
		scanf("%d",&opcao);
		
		
		switch(opcao){
			
			
			case 1 :{
				
				cont ++;
				
				if(quantidade == 0){
					
					printf("\n Nenhuma pessoa cadastrada ;-; ");
				    printf("\n Aloque ao menos um espaço ");
					exit(1);
				
				}if(cont > quantidade){
					
					printf("\n\n Limite ultrapassado \n\n");
			
				}else{
					
					for(i=0; i < quantidade ; i++);{
						
						printf("\n Cadastrando -> %dº <- pessoa  ",i+1);
					
						cadastraPessoa(&vetPessoa[i]);
	
						fflush(stdin);
						getchar();
					}
				
				}
				
				
				
				break;
			}

			case 2:{
				
				if(quantidade == 0){
					
					printf("\n Nenhuma pessoa cadastrada ;-; ");
					printf("\n Aloque ao menos um espaço ");
					exit(1);
				
				}else{
					
					for(i=0; i < quantidade ; i++);{
						
						printf("\n Exibindo -> %dº <- pessoa  ",i+1);
						
						imprimePessoa(&vetPessoa[i]);
	
						fflush(stdin);
						getchar();
					}					
					
					
				}	
				
				break;
			}			
			
			case 3:{

				
				if(quantidade == 0){
					
					printf("\n Nenhuma pessoa cadastrada ;-; ");
					printf("\n Aloque ao menos um espaço ");
					exit(1);
				
				}else{
					
					for(i=0; i <quantidade ; i++);{
						
						printf("\n Editando -> %dº <- pessoa  ",i+1);
					
						editaPessoa(&vetPessoa[i]);
	
						fflush(stdin);
						getchar();
					}
				
				}				
				
				break;
			}

		}
		
	}while(opcao != 0);
		printf("\n adios...");
	
	free(vetPessoa);
	
	return 0;
}
