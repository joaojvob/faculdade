#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
		int largura,comprimento,area,areatotal;
		
	printf("Digite a largurado o primeiro c�modo:");
	scanf("%d",&largura);
	
	printf("Digite a comprimento o primeiro c�modo:");
	scanf("%d",&comprimento);
	
	area=largura*comprimento;
	
	printf("A area do primeiro c�modo e de:%d m",area);
	
	
	printf("\nDigite a largurado o segundo c�modo:");
	scanf("%d",&largura);
	
	printf("Digite a comprimento o segundo c�modo:");
	scanf("%d",&comprimento);
	
	area=largura*comprimento;
	
	printf("A area do segundo c�modo e de:%d m",area);
	
	
	printf("\nDigite a largurado o terceiro c�modo:");
	scanf("%d",&largura);
	
	printf("Digite a comprimento o terceiro c�modo:");
	scanf("%d",&comprimento);
	
	area=largura*comprimento;
	
	printf("A area do terceiro c�modo e de:%d m",area);
	
	
	printf("\nDigite a largurado o quato c�modo:");
	scanf("%d",&largura);
	
	printf("Digite a comprimento o quarto c�modo:");
	scanf("%d",&comprimento);
	
	area=largura*comprimento;
	
	printf("A area do quarto c�modo e de:%d m",area);
	
	
	
	areatotal=area+area+area+area;
	
	
	printf("\nA �rea total da casa e de:%d m",areatotal);
	
	
	
	
	return 0;
}
