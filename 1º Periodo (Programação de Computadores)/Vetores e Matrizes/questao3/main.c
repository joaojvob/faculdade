#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	char gabarito[10];
	char resposta[10];
	int i;
	int acertos=0;
	int erros=0;
	float percentualacertos;
	
	printf("\n Informe o gabarito da prova.\n");
	for(i=0; i<10; i++){
		
		
		printf("Questão %d- ",i+1);
		
		scanf(" %c",&gabarito[i]);
	}
	
 	
      	printf("\n Digite as respostas do aluno  \n");
    	
    
	for(i=0; i<10; i++){	
		  
		printf("\n Questão %d- ",i+1);
		  scanf(" %c", &resposta[i]);  
      	
	  	
	}
	 for(i=0; i<10; i++){
	 	if(gabarito[i]==resposta[i]){
	 		printf("\n Questão %d correta ",i+1);
		 	acertos++;
		 }
		 else{
		 	printf("\n Questão %d incorreta ",i+1);
		 	erros++;
		 }
	 }
		printf("\n");
		
		percentualacertos=(float)((100*acertos)/10);
		printf("\n Percentual de acertos = %.2f%%\n",percentualacertos);
		printf("\n Percentual de erros = %.2f%%\n",(100-percentualacertos));
	
	return 0;
}
