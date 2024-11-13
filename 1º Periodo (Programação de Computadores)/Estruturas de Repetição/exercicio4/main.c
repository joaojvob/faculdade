#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	int numero,c;
	
	
	
	printf("Digite um numero:");
	scanf("%d",&numero);
				
	for(c=1; c<numero ;c++){
		
		printf("%d ",c);
	}
	return 0;
}
