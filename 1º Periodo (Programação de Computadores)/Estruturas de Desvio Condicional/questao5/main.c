#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
		char opcao;
		
		int n1,n2,n3,soma,menor,maior,numero;
		
		printf("Digite o primeiro numero:");
		scanf("%d",&n1);
		
		printf("Digite o segundo numero:");
		scanf("%d",&n2);
	
		printf("Digite o terceiro numero:");
		scanf("%d",&n3);
	
		printf("\tSelecione uma das op��es abaixo\n");
	
		printf("a � Exibir a soma dos tr�s n�meros\n");
		printf("b � Exibir o maior e o menor n�mero entre eles\n");	
		printf("c - Exibir se o primeiro Numero � m�ltiplo dos demais\n");
		printf("d - Exibi-los ordenados de modo decrescente\n");	
		fflush(stdin);
		scanf("%c",&opcao);
		
			switch(opcao){
			
				case 'a':
					
					soma=n1+n2+n3;
					
					
					printf("A soma dos tr�s numero �:%d",soma);
				
				break;
		
				case 'b':
				
					maior = n1;
     
     				menor = n2;
     
     				if (n2 < menor)
        				menor = n2;
     				if (n2 > maior)
        				maior = n2;
     				if (n3 < menor)
        				menor = n3;
     				if (n3 > maior)
     
       				maior = n3;
        
     				printf("O maior numero �: %d", maior);
     				printf("\nO menor numero �: %d", menor);		
			
				break;
				
				case 'c':
				
					if(n1%n2==0 && n1%n3==0){
					printf("O numero digitado � m�ltiplo dos demais.");
	
					}
					else
					{
					printf("O numero digitado n�o � m�ltiplo dos demais.");
					}
				
				break;
				
				case 'd':
					
					if (n3 < n1)
    				if (n1 < n2)
      				printf("Em ordem decrescente: %d %d %d\n", n2, n1, n3);
      
      
    				else if (n2 > n3)
      				printf("Em ordem decrescente: %d %d %d\n", n1, n2, n3);
      
      
  					if (n1 < n2)
    				if (n2 < n3)
      				printf("Em ordem decrescente: %d %d %d\n", n3, n2, n1);
      
      
    				else if (n3 > n1)
      				printf("Em ordem decrescente: %d %d %d\n", n2, n3, n1);
      
      
  					if (n1 > n2)
    				if (n3 > n1)
      				printf("Em ordem decrescente: %d %d %d\n", n3, n1, n2);
      
      
    				else if (n3 > n2)
      				printf("Em ordem decrescente: %d %d %d\n", n1, n3, n2);
		
				break;
				default:
					 printf("Op�ao invalida.");
				}		
		
	return 0;
}


