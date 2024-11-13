#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	float carro,valor,preco;
	
	printf("Digite o valor disponível:R$");
	scanf("%f",&valor);
	
	
	if (valor<=10000){
		printf("\nChevrolet Chevette R$ 6.750,00");	
	
	
		printf("\nVolkswagen Fusca R$ 7.900,00");
	

		printf("\nFiat Tempra R$ 9.550,00");
	}
	else if (valor<=20000.00){
		printf("\nFiat Uno R$ 12.000,00");
	
	
		printf("\nChevrolet Astra R$ 18.990,00");
	}
	else if (valor<=35000.00){
		printf("\nCherry QQ R$ 28.000,00");


		printf("\nRenault Kwid R$ 30.990,00");
	
	
		printf("\nFiat Mobi R$ 35.000,00 ");
	}
	else if (valor<=50000.00){
		printf("\nChevrolet Onix R$ 38.750,00");
	
	
		printf("\nVolkswagen Gol R$ 39.000,00");
	
	
		printf("\nFord ka R$ 46.690,00");
	
	
		printf("\nPeugeot 208 R$ 46.690,00");
	}
	else if (valor<=65000.00){
		printf("\nFord Fiesta R$ 53.000,00");

		printf("\nVolkswagen Polo R$ 62.000,00");
	}
	else if (valor<=145000.00){
		printf("\nFord Focus R$ 89.999,99");

		printf("\nFiat Toro R$ 102.000,00");
	
		printf("\nChevrolet s10 R$ 139.900,00");
	
		printf("\nFord Ranger R$ 145.000,00");	
	}
	else ("Não a carros disponivei para este valor");
	
	
	
	
	
	
	return 0;
}
