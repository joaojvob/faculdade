#include<stdio.h>
#include<stdlib.h>
#include<locale.h>




	int main(){
  	setlocale(LC_ALL,"portuguese");	

	
	float altura,peso,imc;
	
	
	
	printf("Digite sua altura em centímetros:");
	scanf("%f",&altura);
		
	printf("Digite seu peso em quilos:");
	scanf("%f",&peso);	
		
	
	imc=  peso / (altura*altura);
	
	printf("O seu imc é de: %f",imc);
		
		if (imc<15){
			printf("\nExtremamente abaixo do peso");
		}
		if (imc>15 && imc<16){
			printf("\nGravemente abaixo do peso");
		}
		if (imc>16 && imc<18.5){
			printf("\nAbaixo o peso idea");
		}
		if (imc>18.5 && imc<25){
			printf("\nFaixa de peso ideal");
		}
		if (imc>25 && imc<30){
			printf("\nSobrepeso");
		}
		if (imc>30 && imc<35){
			printf("\nObesidade grau I");
		}
		if (imc>35 && imc<40){
			printf("\nObesidade grau II (grave)");
		}
		if (imc>40){
			printf("\nObesidade grau III (mórbida)");
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
