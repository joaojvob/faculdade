#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

	int main(){
	setlocale(LC_ALL,"portuguese");
	
	float num,exp,resultado;
	
	printf("Digite um numero:");
	scanf("%f",&num);
	
	printf("Digite um expoente:");
	scanf("%f",&exp);
	
	
	resultado=pow(num,exp);
	
	
	printf("O resultado do número %0.f elevado ao expoente é: %.2f",num,resultado);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
