#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int h,num;
	int valorf;
	
	
	printf("Informe um número:");
	scanf("%d",&num);
	
		printf("Maior número na sequência gerada pela equação de Knuth\n");
		
	for(h=1; h<num; h=3*h+1){
		
		printf("h= %d \n",h);
	}
	valorf=(h-1)/3;
	
		printf("%d ",h);
	
	
	return 0;
}
