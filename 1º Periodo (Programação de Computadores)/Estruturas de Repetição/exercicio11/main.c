#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	int num,soma;
	int c;
	
	
	printf("Digite um n�mero para ver se � um n�mero perfeito ou n�o:");
	scanf("%d",&num);
	
	while(num<=0){
		printf("Numero invalido\n");
		printf("Informe outro valor superior a 0:");
		scanf("%d",&num);
	}
	for(c=1; c<num; c++)
		
		if(num%c==0)
			
			soma=soma+c;
			
		if(soma==num){
			printf("%d � um n�mero perfeito.",num);
			
		}else{
			printf("%d n�o � um n�mero perfeito.",num);
		}
			
			

	
	
	return 0;
}
