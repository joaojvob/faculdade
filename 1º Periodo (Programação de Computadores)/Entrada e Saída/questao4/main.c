#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*

Uma motocicleta faz em m�dia 32km com um litro de combust�vel e tem a
capacidade do tanque de 18 litros de combust�vel. Francisco abasteceu R$25.00 mas
ainda n�o viajou com sua motocicleta. Fa�a um programa capaz de receber o custo do
litro da gasolina e exiba para Francisco quanto ele deve gastar para encher o tanque e
quantos quil�metros ele poder� viajar sem precisar abastecer novamente


*/



	int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	float precogasolina,capacidade,porlitro,litrosf,precototalg,preco;
	float quilometros;
	
	
	printf("Digite o pre�o da gasolina:R$");
	scanf("%f",&precogasolina);
	
	capacidade=25/precogasolina;
	litrosf=18-capacidade;
	preco=litrosf*precogasolina;
	
	
	
	printf("Total gasto para terminar de  encher o tanque:R$%.2f",preco);
	
	
	quilometros=capacidade*32;
	
	
	printf("\nFrancisco pode andar %.2f KM sem precisar abastecer.",quilometros);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
