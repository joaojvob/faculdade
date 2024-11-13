#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
		float salariom,poupar,a,despesas,meses,valort,anos;
		
		printf("Digite o salario mensal:");
		scanf("%f",&salariom);
	
		printf("Despesas mensais:");
		scanf("%f",&despesas);
	
		printf("O quanto pretende poupar:");
		scanf("%f",&poupar);
		
		
		a=salariom-despesas;
		meses=poupar/a;
		
		anos=meses/12;
		
		printf("Serão necessarios %.2f meses",anos);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
