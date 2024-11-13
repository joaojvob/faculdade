#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main() {
	
	
	float valor;
	float soma=0;

	printf("\tContinue digitando ou aperte 0 para mostrar a soma dos valores.\n");
	
	do{
		printf("Digite um valor:");
		scanf("%f",&valor);
		soma=soma+valor;
		
	}while(valor!=0);
	
	printf("Soma total= %.2f\n",soma);
		

}
