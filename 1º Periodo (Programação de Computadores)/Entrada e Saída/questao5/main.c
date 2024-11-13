#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int kmi,kmt,lt,litrosgastos,gasolina;
	
	
	
	printf("Informe o KM inicial:");
	scanf("%d",&kmi);
	
	printf("Informe o KM final:");
	scanf("%d",&kmt);
	
	printf("Digite a quantidade de litros gastos:");
	scanf("%d",&litrosgastos);
	
	lt=kmt-kmi;
	gasolina=lt/litrosgastos;
	
	printf("Para rodar %d Km ele precisou de %d litros de gasolina",lt,gasolina);
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	return 0;
}
