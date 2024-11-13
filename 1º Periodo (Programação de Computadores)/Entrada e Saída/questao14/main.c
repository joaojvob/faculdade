#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("Digite um numero:");
	scanf("%d",&numero);
	
	
	if(numero%2==0){
		printf("numero par");
	}
	else{
		printf("numero impar");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
