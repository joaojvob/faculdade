#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("Digite um número:");
	scanf("%d",&num);	
	
	if(num%2==0){
		printf("%d não é um número primo.",num);
	}else{
		printf("%d é um número primo.",num);
	}

	
	return 0;
}
