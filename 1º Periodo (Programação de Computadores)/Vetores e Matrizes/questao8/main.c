#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int matriz[12][4];
	int soma=0;
	int somat=0;
	int i,j;
	int l,c;
	   
	     printf("\n  Valores das vendas \n");
	    
		
		for(l=0; l<12; l++){
			for(c=0; c<4; c++){
				printf(" Mês %d semana %d = ",l+1,c+1);
			//	matriz[l][c]=1+ rand ()%2;
				scanf("%d", &matriz[l][c]);
				
			}
		printf("\n");
		}
		
		printf("\n  A-O total vendido em cada mês\n");
		
		
				soma=0;
				
				for(l=0; l<12; l++){
					
    				soma += matriz[l][i];
	 			}	
	
				printf("\nSoma  dos meses = %d \n",soma);
				
				
		printf("\n  B-O total vendido em cada semana durante todo o ano\n");
		
		
				soma=0;
				
				for(c=0; c<48; c++){
					
    				soma += matriz[i][c];
	 			}	
	
				printf("\nSoma  das semanas = %d \n",soma);		
				
				
		printf("\n  C-O total vendido no ano\n");
		soma=0;
		 for(l=0; l<12; l++){
				for(c=0; c<48; c++){
					soma += matriz[i][c];
				}	
    				soma += matriz[l][i];
	 		}
	 
					 
		printf("\nSoma total = %d",soma);
	
	return 0;
}
