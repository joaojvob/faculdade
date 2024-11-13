#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
		
		int numero;
		
		printf("Digite um numero:");
		scanf("%d",&numero);
		
		
		if(numero>0){
			printf("O numero digitado é maior que zero.");
				
		}else{
			printf("O numero digitado é menor que zero.");
		} 
		
	
		if (numero%2==0){
			printf("\nO numero digitado é par.");
		
		}else{
			printf("\nO numero digitado é impar. ");
		}
	
		if (numero%3 == 0){
			printf("\nO numero digitado é multiplo de 3.");
		
		}else{
			printf("\nO numero digitado não multiplo de 3.");
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
