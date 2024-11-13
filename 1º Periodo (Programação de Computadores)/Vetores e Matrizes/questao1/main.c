#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i;
	int vetor[10];
	char opcao;
	int maior,menor,multiplicacao;
	int soma=0,subtracao=0;
	int posicaomenor,posicaomaior;
	


	
	for(i=0; i<10; i++){
			//vetor[i]=1+ rand ()%100;
			printf("\n Preencha a  posição %d do vetor = ",i);
			scanf("%d",&vetor[i]);
	}			
	do{	
		printf("\n\n");
		printf("\t\t ESCOLHA UMA DAS OPÇÕES \n");
		printf("\n");
		printf(" a-Exibir qual o menor e maior valor armazenado no vetor.\n");
		printf(" b-Exibir em quais posições estão o maior e o menor valor.\n");
		printf(" c-Soma de todos os valores do vetor.\n");
		printf(" d-Subtração dos valores da posição 0 até a posição 9.\n");
		printf(" e-Imprimir o vetor começo ao fim.\n");
		printf(" f-Imprimir o vetor do fim até o começo.\n");
		printf(" g-Imprimir somente os valores contidos nas posições pares.\n");
		printf(" h-Imprimir apenas os valores ímpares.\n");
		printf(" i-Imprimir para cada posição o valor multiplicado pela posição.\n");
		printf(" x-Para finalizar o programa \n");
		fflush(stdin);
		scanf("%c",&opcao);
	
		printf("\n\n");
	
	switch(opcao){
		
		case 'a': //exibir menor e maior
		{
			
			for(i=0; i<10; i++){  //O primeiro numero é o menor e o maior
				if(i==0){
					menor=vetor[i];
					maior=vetor[i];
				}
			}
			
			
			
			for(i=0; i<10; i++){  //Verificar qual  numero e o menor
			
				if(menor>vetor[i]){
					menor=vetor[i];
				}
			}
				printf(" %d é o menor número armazenado no vetor.\n",menor);  //Exibir o menor numero
					
			for(i=0; i<10; i++){  //Verificar qual  numero e o maior
			
				if(maior<vetor[i]){
					maior=vetor[i];
				}
			}
				printf(" %d é o maior número amarzenado no vetor.\n",maior);	//Exibir o maior numero	
									
			break;
		}
			printf("\n\n");
		
		case 'b'://exibir posição
		{
		
			for(i=0; i<10; i++){   //O primeiro numero é o menor e o maior
				if(i==0){
					menor=vetor[i];
					maior=vetor[i];
				}
			}
		
		
		
		
				for(i=0; i<10; i++){  //A primeira posição e onde fica o maior e o menor numero
				if(i==0){
					posicaomenor=vetor[i];
					posicaomaior=vetor[i];
				}
			}
				
				
				
			for(i=0; i<10; i++){ //Verificar qual  numero e o maior e em qual posição ele se encontra
				;
				if(menor>vetor[i]){
					menor=vetor[i];
					posicaomenor=i;
				}
			}
				printf(" %d é o menor número armazenado no vetor e está localizado na posição %d.\n",menor,posicaomenor); // exibir o menor numero e a posição onde ele fica
				posicaomaior=0;	
			
			for(i=0; i<10; i++){ //Verificar qual  numero e o maior e em qual posição ele se encontra
			
				if(maior<vetor[i]){
					maior=vetor[i];
					posicaomaior=i;
				}
			}
				printf(" %d é o maior número amarzenado no vetor e está localizado na posição %d.\n",maior,posicaomaior);// exibir o maior numero e a posição onde ele fica
		
			break;
		}
	
		case 'c'://exibir soma
		{
			
			for(i=0; i<10; i++){
				soma++;
    			soma+=vetor[i];
	 			}	
				printf(" Soma dos valores: %d \n", soma);
			
		
			break;
		}
	
		case 'd'://exibir subtração
		{
				for(i=0; i<10; i++){

    			subtracao-=vetor[i];
	 			}	
				printf(" Subtração dos valores: %d \n", subtracao);
			

			break;
		}
	
	
		case 'e':// exibir o vetor começo ao fim.
		{
			
			for(i=0; i<10; i++){
				
				printf(" Posição[%d] valor [%d]\n",i,vetor[i]);
			}
		
			break;
		}
	
		case 'f'://exibir vetor do  fim ao começo
		{
			
			for(i=9; i>=0; i--){
				
				printf(" Posição[%d] valor [%d]\n",i,vetor[i]);
			}
		
			break;
		}
	
		case 'g'://exibir valores pares
		{
			printf(" Valores pares\n");
			for(i=0; i<10; i++){
				
				if(vetor[i]%2==0){
				printf(" Posição[%d] valor [%d]\n",i,vetor[i]);
				
				}
			}
		
			break;
		}
	
		case 'h'://exibir valores impares
		{
			printf(" Valores impares\n");
			for(i=0; i<10; i++){
				
				if(vetor[i]%3==0){
				printf(" Posição[%d] valor [%d]\n",i,vetor[i]);
				};
			}
		
			break;
		}
	
		case 'i':
		{
			for(i=0; i<10; i++){
			
				multiplicacao=i*vetor[i];
	 			
				 printf(" [%d] * [%d]= %d\n",i,vetor[i],multiplicacao);
				 }	
					
			
			break;
		}
	
		
		}
	
	}while(opcao != 'x');
	

	
	return 0;
}
