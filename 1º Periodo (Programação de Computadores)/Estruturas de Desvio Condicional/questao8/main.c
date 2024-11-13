#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	char forma_de_pagamento;
	
	float compra,pago,troco,parcelas,parcela;
	
	printf("\t\tForma de pagamento");
	printf("\nDigite 1 para pagar em dinheiro.");
	printf("\nDigite 2 para pagar com o cartão de credito.\n");
	scanf("%c",&forma_de_pagamento);
	
	
	switch(forma_de_pagamento){
		
		case '1':
			printf("Digite o valor da compra:R$");
			scanf("%f",&compra);
			
			printf("Digite o valor pago pelo cliente:R$");
			scanf("%f",&pago);
			
			troco=pago-compra;
			
			printf("O troco a ser devolvido ao cliente e de:R$%.2f ",troco);
			
		break;
	
	
		case '2':
			
		printf("Digite o valor da compra:R$");
		scanf("%f",&compra);
			
		printf("Informe a quantidade de parcelas desejadas:");
		scanf("%f",&parcelas);
			
		parcela=compra/parcelas;
			
		printf("O valor de cada parcela será de:R$%.2f por mês",parcela);
	
		break;
	
}

	return 0;
}
