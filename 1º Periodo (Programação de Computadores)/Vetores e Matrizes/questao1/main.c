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
			printf("\n Preencha a  posi��o %d do vetor = ",i);
			scanf("%d",&vetor[i]);
	}			
	do{	
		printf("\n\n");
		printf("\t\t ESCOLHA UMA DAS OP��ES \n");
		printf("\n");
		printf(" a-Exibir qual o menor e maior valor armazenado no vetor.\n");
		printf(" b-Exibir em quais posi��es est�o o maior e o menor valor.\n");
		printf(" c-Soma de todos os valores do vetor.\n");
		printf(" d-Subtra��o dos valores da posi��o 0 at� a posi��o 9.\n");
		printf(" e-Imprimir o vetor come�o ao fim.\n");
		printf(" f-Imprimir o vetor do fim at� o come�o.\n");
		printf(" g-Imprimir somente os valores contidos nas posi��es pares.\n");
		printf(" h-Imprimir apenas os valores �mpares.\n");
		printf(" i-Imprimir para cada posi��o o valor multiplicado pela posi��o.\n");
		printf(" x-Para finalizar o programa \n");
		fflush(stdin);
		scanf("%c",&opcao);
	
		printf("\n\n");
	
	switch(opcao){
		
		case 'a': //exibir menor e maior
		{
			
			for(i=0; i<10; i++){  //O primeiro numero � o menor e o maior
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
				printf(" %d � o menor n�mero armazenado no vetor.\n",menor);  //Exibir o menor numero
					
			for(i=0; i<10; i++){  //Verificar qual  numero e o maior
			
				if(maior<vetor[i]){
					maior=vetor[i];
				}
			}
				printf(" %d � o maior n�mero amarzenado no vetor.\n",maior);	//Exibir o maior numero	
									
			break;
		}
			printf("\n\n");
		
		case 'b'://exibir posi��o
		{
		
			for(i=0; i<10; i++){   //O primeiro numero � o menor e o maior
				if(i==0){
					menor=vetor[i];
					maior=vetor[i];
				}
			}
		
		
		
		
				for(i=0; i<10; i++){  //A primeira posi��o e onde fica o maior e o menor numero
				if(i==0){
					posicaomenor=vetor[i];
					posicaomaior=vetor[i];
				}
			}
				
				
				
			for(i=0; i<10; i++){ //Verificar qual  numero e o maior e em qual posi��o ele se encontra
				;
				if(menor>vetor[i]){
					menor=vetor[i];
					posicaomenor=i;
				}
			}
				printf(" %d � o menor n�mero armazenado no vetor e est� localizado na posi��o %d.\n",menor,posicaomenor); // exibir o menor numero e a posi��o onde ele fica
				posicaomaior=0;	
			
			for(i=0; i<10; i++){ //Verificar qual  numero e o maior e em qual posi��o ele se encontra
			
				if(maior<vetor[i]){
					maior=vetor[i];
					posicaomaior=i;
				}
			}
				printf(" %d � o maior n�mero amarzenado no vetor e est� localizado na posi��o %d.\n",maior,posicaomaior);// exibir o maior numero e a posi��o onde ele fica
		
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
	
		case 'd'://exibir subtra��o
		{
				for(i=0; i<10; i++){

    			subtracao-=vetor[i];
	 			}	
				printf(" Subtra��o dos valores: %d \n", subtracao);
			

			break;
		}
	
	
		case 'e':// exibir o vetor come�o ao fim.
		{
			
			for(i=0; i<10; i++){
				
				printf(" Posi��o[%d] valor [%d]\n",i,vetor[i]);
			}
		
			break;
		}
	
		case 'f'://exibir vetor do  fim ao come�o
		{
			
			for(i=9; i>=0; i--){
				
				printf(" Posi��o[%d] valor [%d]\n",i,vetor[i]);
			}
		
			break;
		}
	
		case 'g'://exibir valores pares
		{
			printf(" Valores pares\n");
			for(i=0; i<10; i++){
				
				if(vetor[i]%2==0){
				printf(" Posi��o[%d] valor [%d]\n",i,vetor[i]);
				
				}
			}
		
			break;
		}
	
		case 'h'://exibir valores impares
		{
			printf(" Valores impares\n");
			for(i=0; i<10; i++){
				
				if(vetor[i]%3==0){
				printf(" Posi��o[%d] valor [%d]\n",i,vetor[i]);
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
