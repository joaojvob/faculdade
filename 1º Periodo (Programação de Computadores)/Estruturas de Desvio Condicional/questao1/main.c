#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
		
		int numero;
		
		printf("Digite um numero:");
		scanf("%d",&numero);
		
		
		if(numero>0){
			printf("O numero digitado � maior que zero.");
				
		}else{
			printf("O numero digitado � menor que zero.");
		} 
		
	
		if (numero%2==0){
			printf("\nO numero digitado � par.");
		
		}else{
			printf("\nO numero digitado � impar. ");
		}
	
		if (numero%3 == 0){
			printf("\nO numero digitado � multiplo de 3.");
		
		}else{
			printf("\nO numero digitado n�o multiplo de 3.");
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
