#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int matriz[4][4];
	int l,i,j,c;
	int linha;
	char opcao;
	int soma,coluna;
	
	int main(){
	setlocale(LC_ALL,"portuguese");
	
		printf("\t Preencha a matriz \n");

	
	
	for(l=0; l<4; l++){
		for(c=0; c<4; c++){
			
		printf("\n  Posição da matriz [%d][%d] = ", l, c);
      	//	matriz[l][c]=1+ rand ()%50;
		scanf("%d", &matriz[l][c]);
	
		}
	}
	do{		
		
		printf("\n\n");
		printf(" \t ESCOLHA UMA DAS OPÇÕES \n");
		printf(" a-Exibir a matriz completa\n");
		printf(" b-Exibir os números da diagonal principal e secundária\n");
		printf(" c-Exibir soma de uma determinada linha (usuário informa a linha)\n");
		printf(" d-Exibir soma de uma determinada coluna (usuário informa a coluna)\n");
		printf(" s-Para sair do programa\n");
		printf("  \n");
		fflush(stdin);
		scanf("%c",&opcao);
		
		switch(opcao){
			case 'a':{
			
			for(l=0; l<4; l++){
				for(c=0; c<4; c++){
				
					if(matriz[ l ][ c ]<10){
				 		printf("[  %d ]",matriz[ l ][ c ]);
			     }
					else{		
						printf ("[ %d ]",matriz[ l ][ c ]);
      		     }
			   }
				printf("\n");
			}
						
			
				break;
			}
			case 'b':{
				
				printf("\nDiagonal principal\n");
				
				for(l=0; l<4; l++){
					for(c=0; c<4; c++){
						
							if(l==c){
							printf(" %d ",matriz[l][c]);
						}
						else{
							printf ("   ",matriz[l][c]);
      						}
						}
							printf("\n");
						}
				
				printf("\nDiagonal secundaria\n");
				
				for(i=0, j=3; i<4; i++,j--){
					
						
							if(l==c){
							printf(" %d ",matriz[i][j]);
						}
						else{
							printf ("   ",matriz[i][j]);
      						}
					
							printf("\n");
						}

				
				break;
			}
			case 'c':{
				
				printf(" Informe a linha que deseja somar\n");
				scanf("%d",&linha);
				
				soma=0;
				
				for(i=0; i<4; i++){
					
    				soma += matriz[linha][i];
	 			}	
				
				
			
				printf(" Soma  da linha = %d \n",soma);
				
				break;
			}
			case 'd':{
				
				printf(" Informe a coluna que deseja somar\n");
				scanf("%d",&coluna);
				soma=0;
				for(j=0; j<4; j++){
					
					soma += matriz[j][coluna];
				}
				printf(" Soma da coluna = %d \n",soma);
				
				
				break;
			}
	
}
	
	}while(opcao != 's');
	printf("\n\t Programa finalizado \n");
	
	
	return 0;
}
