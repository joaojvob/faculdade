#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");	
	
	
	float celsius,fah;
	
	printf("Digite a temperatura em Celsius:");
	scanf("%f",&celsius);
	
	
	fah=(9*celsius+160)/5;
	
	
	printf("Temperatura em Fahrenheit:%.1f",fah);
	
	
	
	
	
	
	
	
	return 0;
}
