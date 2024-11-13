#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 

 	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vetor[10];
	int i,j;

	
	
	printf("\tPreencha um vetor com 10 posições\n");
	
	
		for(i=0; i<10; i++){
			printf(" Informe um numero diferente de 0 para a posição %d \n",i+1);
			scanf("%d",&vetor[i]);
		
				for(j=0; j<i; j++){
				
					if(vetor[i]==0){
					printf("\n Numero invalido\n");
					i--;
					}
						
			}
		
		}
	
		printf("\n\n");
			
	
		for(i=0; i<10; i++){
				printf(" Posição %d valor %d \n",i+1,vetor[i]);
			}
	
	
	
	
	return 0;
}
