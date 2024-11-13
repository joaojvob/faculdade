#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	int matriz [4][4];
	int l,c;
	char opcao;
	int maior,menor;
	int soma;
	int sub;
	int i,j;
	
	printf(" Preencha a matriz \n");
	
	
	for(l=0; l<4; l++){
		for(c=0; c<4; c++){
			
			printf("Na linha[%d]  Na Coluna [%d] = ", l, c);
      	//	scanf("%d", &matriz[l][c]);
			matriz[l][c]=rand()%100;
		}
		printf("\n");
	}
	
		
	do{
		printf("\n\n");
	
		printf(" a-Exibir o maior número contido na matriz\n");
		printf(" b-Exibir o menor número contido na matriz\n");
		printf(" c-Valores da diagonal principal\n");
		printf(" d-Valores da diagonal secundária\n");
		printf(" e-A soma dos elementos de todas as linhas\n");
		printf(" f-A soma dos elementos de todas as colunas\n");
		printf(" S-Sair\n");
		fflush(stdin);
		scanf("%c",&opcao);
	



	printf("\n\n");



	switch(opcao){
		
		
		case 'a':{
			
			for(l=0; l<4; l++){
				for(c=0; c<4; c++){
					if(i==0){
						menor=matriz[l][c];
						maior=matriz[l][c];
				    }   
				}
            }
				for(l=0; l<4; l++){
					for(c=0; c<4; c++){
						
						if(maior<matriz[l][c]){
							maior=matriz[l][c];
					    }
				    }
			    }
			     printf(" %d é o maior número armazenado na matriz.\n",maior);
			break;
		}
		
		case 'b':{
			
			for(l=0; l<4; l++){
				for(c=0; c<4; c++){
				
					if(i==0){
						menor=matriz[l][c];
						maior=matriz[l][c];
					}
				}
			}
				
				for(l=0; l<4; l++){
					for(c=0; c<4; c++){		
						if(menor>matriz[l][c]){
							menor=matriz[l][c];
						}
					}
				}
			
				printf(" %d é o menor número armazenado na matriz.\n",menor); 
			
			break;
		}
		
		case 'c':{
		
		
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
				
		printf("\n\n");
		
			
		for(l=0; l<4; l++){
			for(c=0; c<4; c++){
				if(l==c){
				 	printf("[ %d ]",matriz[l][c]);
			    }
				else{		
					printf ("[    ]",matriz[l][c]);
      		    	}
			}
			printf("\n");
		}
		
	
			break;
		}
		
		case 'd':{
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
				
			
			
			printf("\n\n");
			
			
			
			for(i=0, j=3; i<4; i++,j--){
				if(l==c){
					printf("[ %d ]",matriz[i][j]);
				}
				else{
					printf ("[   ]",matriz[i][j]);
      			}
				printf("\n");
			}
			
			break;
		}
		
		case 'e':{
				
				for(l=0; l<4; l++){
					soma=0;
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
				
			
			
			printf("\n\n");
				
				
				soma=0;
				
				for(i=0; i<4; i++){
					soma += matriz[l][i];
	 			
				printf(" linha %d Soma   = %d \n",i,soma);
			}
			break;
	 }
		
		
		case 'f':{
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
				
			
			
			printf("\n\n");
				
				
				
				
				soma=0;
				
				for(j=0; j<4; j++){
					soma += matriz[j][c];
				
				printf(" coluna %d Soma   = %d \n",j,soma);
			}
			break;
		}
		
 }

	}while(opcao != 's');
	
		

	
	return 0;
}
