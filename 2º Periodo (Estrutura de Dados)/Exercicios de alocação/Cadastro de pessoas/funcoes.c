#include <stdlib.h>
#include <stdio.h>
#include "pessoa.h"
#include <locale.h>
#include <string.h>

void cadastraPessoa(tipoPessoa *pessoa){
	
	printf("\n\n");
	
	printf("\n id : ");
	fflush(stdin);
	scanf("%d",&pessoa->id);
	
	
	printf("\n Nome : ");
	fflush(stdin);
	fgets(pessoa->nome,100,stdin);
	
	printf("\n Salario : ");
	fflush(stdin);
	scanf("%f",&pessoa->salario);
	
	
	printf("\n Idade : ");
	fflush(stdin);
	scanf("%d",&pessoa->idade);
	
	printf("\n Sexo : ");
	fflush(stdin);
	fgets(pessoa->sexo,100,stdin);
	


}

void imprimePessoa(tipoPessoa *pessoa ){
	
	printf("\n\n");
	
	printf("\n id : %d \n",pessoa->id);
	
	printf("\n Nome : %s \n",pessoa->nome);
	
	printf(" Salario : %.2f \n",pessoa->salario);
		
	printf("\n Idade : %d \n",pessoa->idade);

	
	printf("\n Sexo : %s \n",pessoa->sexo);

	


}

void editaPessoa(tipoPessoa *pessoa ){
	
		
	printf("\n\n");
	
	printf("\n id : ");
	fflush(stdin);
	scanf("%d",&pessoa->id);
	
	
	printf("\n Nome : ");
	fflush(stdin);
	fgets(pessoa->nome,100,stdin);
	
	printf("\n Salario : ");
	fflush(stdin);
	scanf("%f",&pessoa->salario);
	
	
	printf("\n Idade : ");
	fflush(stdin);
	scanf("%d",&pessoa->idade);
	
	printf("\n Sexo : ");
	fflush(stdin);
	fgets(pessoa->sexo,100,stdin);
	
}
