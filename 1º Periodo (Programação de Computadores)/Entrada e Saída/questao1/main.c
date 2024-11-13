#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	float valorc,valor10,valor15,valorc10,valorc15;
	
	
	printf("Digite o valor da compra para 10%% de desconto:");
	scanf("%f",&valorc);
	
	valor10=(valorc*10)/100;
	valorc10=valorc-valor10;
	
	
	printf("Valor a pagar com 10%% de desconto:%.2fR$",valorc10);
	
	
	
	printf("\nDigite o valor da compra para 15%% de desconto:");
	scanf("%f",&valorc);
	
	valor15=(valorc*15)/100;
	valorc15=valorc-valor15;
	
	
	printf("Valor a pagar com 15%% de desconto:%.2fR$",valorc15);
	
	
	
	
	
	return 0;
	
}
