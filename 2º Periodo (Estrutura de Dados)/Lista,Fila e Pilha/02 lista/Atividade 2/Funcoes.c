#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Estruturas.h"

void sms(tipoSMS *SMS ){


		printf("\n\n");
	
		printf("\n N�mero do Destinat�rio : ");
		fflush(stdin);
		fgets(SMS->numeroDoDestinatario,16,stdin);
	
		printf("\n Hora do envio : ");
		fflush(stdin);
		fgets(SMS->horaDoEnvio,5,stdin);
	
		printf("\n Data do envio : ");
		fflush(stdin);
		fgets(SMS->dataDoEnvio,11,stdin);
	
		printf("\n Escreva aqui sua mensagem \n -> ");
		fflush(stdin);
		fgets(SMS->mensagem,250,stdin);
	

	
}

void exibirSMS(tipoSMS *SMS ){
	


		printf("\n\n");
	
		printf("\n N�mero do Destinat�rio : %s ",SMS->numeroDoDestinatario);
	
		printf("\n Hora do envio : %s ",SMS->horaDoEnvio);

		printf("\n Data do envio : %s ",SMS->dataDoEnvio);

		printf("\n Sua mensagem \n -> %s ",SMS->mensagem);
	
	
}
