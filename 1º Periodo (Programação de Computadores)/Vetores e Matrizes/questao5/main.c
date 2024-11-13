#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 

 	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vetor[8];
	int i,j;

	
	
	printf("\tPreencha o vetor\n");
	
	
		for(i=0; i<8; i++){
			printf(" \nInforme um numero para a posição %d \n",i+1);
			scanf("%d",&vetor[i]);
		
				for(j=0; j<i; j++){
				
					if(vetor[i]==vetor[j]){
					printf("\n Numero repetido informe outro\n");
					i--;
					}
						
			}
		
		}
	
		printf("\n\n");
			
	
		for(i=0; i<8; i++){
				printf(" Posição %d valor %d \n",i+1,vetor[i]);
			}
	
	
	
	
	return 0;
}
