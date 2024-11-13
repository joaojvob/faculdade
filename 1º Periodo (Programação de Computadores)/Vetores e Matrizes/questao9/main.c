#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int matriz[3][3];
	int l,c;
	int soma=0;
	int i,j;
		
		
		for(l=0; l<3; l++){
				soma=0;
				
				for(c=0; c<3; c++){
					printf("\n Na linha %d na coluna %d = ",l+1,c+1);
					scanf("%d",&matriz[l][c]);
					soma += matriz[l][c];
				}
				
				printf("\n soma = %d\n",soma);
				
			if(soma !=9){
				printf("\n A soma deu diferente de 9\n ");
				l--;
			    
			}else{
			
			
		}
	}
	
	
		for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			
			if(matriz[l][c]<10){
				printf("[  %d ]",matriz[l][c]);
			}
			else{		
				printf ("[ %d ]",matriz[l][c]);
      		}
			
			
		}
		printf("\n");
	}

	
	return 0;
}
