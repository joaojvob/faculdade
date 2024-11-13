#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	 
	 
	 float fabrica,custototal,imposto,distribuidor;
	 
	 
	
	printf("Imforme o custo de fabrica:");
	scanf("%f",&fabrica);
	
	
	imposto=(fabrica*45)/100;
	distribuidor=(fabrica*12)/100;
	
	
	
	
	custototal=fabrica+imposto+distribuidor;
	
	
	printf("O valor total do carro é de:%.2f R$",custototal);
	
	
	return 0;
}
