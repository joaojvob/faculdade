#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num1,num2;
	
	int c;
	
	printf("Digite o primeiro numero:");
	scanf("%d",&num1);
	
	printf("Digite o segundo numero:");
	scanf("%d",&num2);
	
	printf("numeros entre %d e %d:\n",num1,num2);
	 
	for(c=num1+1; c<=num2-1; c++){
		printf("=%d\n",c);
	}
	
	for(c=num2+1; c<=num1-1; c++){
		printf("=%d\n",c);
	}

	for(c=num1-1; c<=num2-1; c++){
		printf("=%d\n",c);
	}
	
	for(c=num2-1; c<=num1-1; c++){
		printf("=%d\n",c);
	}

	
	return 0;
}
