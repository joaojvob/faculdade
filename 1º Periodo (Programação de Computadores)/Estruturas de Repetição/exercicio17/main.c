#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int h,num;
	int valorf;
	
	
	printf("Informe um n�mero:");
	scanf("%d",&num);
	
		printf("Maior n�mero na sequ�ncia gerada pela equa��o de Knuth\n");
		
	for(h=1; h<num; h=3*h+1){
		
		printf("h= %d \n",h);
	}
	valorf=(h-1)/3;
	
		printf("%d ",h);
	
	
	return 0;
}
