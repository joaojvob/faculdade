#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Estruturas.h"




void Cadastro(tipoEmpresa *empresa){
	setlocale(LC_ALL,"portuguese");

	
	printf("\n");
	
	printf("\n Nome : ");
	fflush(stdin);
	fgets(empresa->nomeFantasia,100,stdin);
	
	printf("\n Razão Social : ");
	fflush(stdin);
	fgets(empresa->razaoSocial,100,stdin);
	
	printf("\n CNPJ : ");
	fflush(stdin);
	fgets(empresa->CNPJ,100,stdin);

	
}

//
// Exbir
//

void Exibir(tipoEmpresa *empresa){
	setlocale(LC_ALL,"portuguese");
	
	
	printf("\n");
	
	printf("\n Nome 		: %s ",empresa->nomeFantasia);
	
	printf("\n Razão Social   : %s ",empresa->razaoSocial);

	printf("\n CNPJ 		: %s ",empresa->CNPJ);

}
