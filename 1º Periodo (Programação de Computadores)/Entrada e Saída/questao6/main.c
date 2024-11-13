#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
		int largura,comprimento,area,areatotal;
		
	printf("Digite a largurado o primeiro cômodo:");
	scanf("%d",&largura);
	
	printf("Digite a comprimento o primeiro cômodo:");
	scanf("%d",&comprimento);
	
	area=largura*comprimento;
	
	printf("A area do primeiro cômodo e de:%d m",area);
	
	
	printf("\nDigite a largurado o segundo cômodo:");
	scanf("%d",&largura);
	
	printf("Digite a comprimento o segundo cômodo:");
	scanf("%d",&comprimento);
	
	area=largura*comprimento;
	
	printf("A area do segundo cômodo e de:%d m",area);
	
	
	printf("\nDigite a largurado o terceiro cômodo:");
	scanf("%d",&largura);
	
	printf("Digite a comprimento o terceiro cômodo:");
	scanf("%d",&comprimento);
	
	area=largura*comprimento;
	
	printf("A area do terceiro cômodo e de:%d m",area);
	
	
	printf("\nDigite a largurado o quato cômodo:");
	scanf("%d",&largura);
	
	printf("Digite a comprimento o quarto cômodo:");
	scanf("%d",&comprimento);
	
	area=largura*comprimento;
	
	printf("A area do quarto cômodo e de:%d m",area);
	
	
	
	areatotal=area+area+area+area;
	
	
	printf("\nA área total da casa e de:%d m",areatotal);
	
	
	
	
	return 0;
}
