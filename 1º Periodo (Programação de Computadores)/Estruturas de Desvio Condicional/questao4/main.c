#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	
	printf("Digite um numero:");
	scanf("%d",&numero);
	
	if(numero %7==0){
			printf("O numero digitado � multiplo de 7.");
	
	}else{
		printf("O numero digitado n�o � multiplo de 7.");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
