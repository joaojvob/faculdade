#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main() {
	setlocale(LC_ALL,"portuguese");
	
	float num;
	float soma=0;
	float media;
	char opcao;
	float quantidade=0;
	
		
		printf("Digite um número:\n");
		scanf("%f",&num);
		quantidade++;
		soma=soma+num;
	
	
	
	do{
		
		printf("(a)-deseja digitar mais.\n");
		printf("(b)-ou deseja ver o resultado.\n");
		fflush(stdin);
		scanf("%c",&opcao);
	
		
		switch(opcao){
			
			case 'a':
				
				printf("\nDigite outro numero:\n");
				scanf("%f",&num);
				quantidade++;
				
				soma=soma+num;
				
				
				break;
			
			
			case 'b':
				num=0;
				
				break;
					
			
		}	
	}while(num!=0);
	
		
		
				printf("\nSoma total= %.2f\n",soma);
				
				
				media=soma/quantidade;

				printf("\nMédia aritmética:%.2f\n",media);
		
}
