#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	float salario,vendas,valorl,valor,comissao;
	
	
	
	printf("Digite o valor do salario:");
	scanf("%f",&salario);
	
	printf("Digite o valor da venda:");
	scanf("%f",&vendas);
	
	
	comissao=(vendas*7)/100;
	
	
	valorl=salario+comissao;
	
	
	
	
	
	printf("Valor total arrecadado:%.2f",valorl);
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
