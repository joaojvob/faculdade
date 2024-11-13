#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "canal.h"



int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char opcao;
	int cont=0;
	int i;
	
	tipoCanal *vetorDeCanais;
	tipoCanal *vetorDeVideos;
	
	vetorDeCanais = malloc(2*sizeof(tipoCanal));
	
	vetorDeVideos = malloc(10*sizeof(tipoCanal));
	
	do{
		printf("\n 0 - sair ");
		printf("\n 1 - Cadastrar canal ");
		printf("\n 2 - Cadastrar vídeo  ");
		printf("\n 3 - Exibir canal  ");
		printf("\n 4 - Exibir video  \n ");
		fflush(stdin);
		scanf("%c",&opcao);
		
		switch(opcao){
			
			case '0' :{
				
				printf("\n adios...");
				exit(1);
				
				break;
			}
			
			case '1' :{
				
				cont++;
				
				for(i=0; i<2; i++){
					printf("\n\n");
					printf("\n -> %dº canal ",i+1);
					printf("\n\n");
					cadastraCanal(&vetorDeCanais[i]);
					fflush(stdin);
					getchar();
				
							
				}
				
				break;
			}
			
			case '2' :{
				
				if(cont ==0){
					printf("\n nenhum canal cadastrado ...");
				}else{
				
				
					for(i=0; i<10; i++){
						printf("\n\n");
					
					
						printf("\n -> %dº vídeo do proprietario -> %s \n ",i+1,vetorDeCanais[0].proprietario);
						fflush(stdin);
						cadastraVideo(&vetorDeVideos[0]);
					}	
				
					printf("\n------------------------------------------------\n");
				
					for(i=0; i<10; i++){
					
						printf("\n -> %dº vídeo do proprietario -> %s \n ",i+1,vetorDeCanais[1].proprietario);
						fflush(stdin);
						cadastraVideo(&vetorDeVideos[1]);
					
						printf("\n\n");
					}				

				
				}
				
				break;
			}
			
			case '3':{

				if(cont ==0){
					printf("\n nenhum canal cadastrado ...");
				}else{				
				
				
				
					for(i=0; i<2; i++){
						printf("\n\n");
						
					
						printf("\n -> %dº canal do proprietario -> %s \n",i+1,vetorDeCanais[i].proprietario);
						fflush(stdin);
						exibiCanal(&vetorDeCanais[i]);
					
						printf("\n\n");
					}				
				
				}
				
				break;
			}
			
			case '4':{
				
				if(cont ==0){
					printf("\n nenhum canal cadastrado ...");
				}else{				
				
				

					for(i=0; i<10; i++){
						printf("\n\n");
					
					
						printf("\n -> %dº vídeo do proprietario -> %s  \n",i+1,vetorDeCanais[0].proprietario);
						fflush(stdin);
						exibiVideo(&vetorDeCanais[0]);
					
						printf("\n\n");
					}
					
					printf("\n------------------------------------------------\n");		
				
					for(i=0; i<10; i++){
						printf("\n\n");
					
					
						printf("\n -> %dº vídeo do proprietario -> %s  \n",i+1,vetorDeCanais[1].proprietario);
						fflush(stdin);
						exibiVideo(&vetorDeCanais[1]);
					
						printf("\n\n");
					}
				
				}
				
				
				break;
			}
			
			
			default:
				printf("\n opção invalida");
			
		}
				
		
	}while(opcao);
	
		printf("\n adios....");
	
	
	
	
	free(vetorDeCanais);
	
	return 0;
}
