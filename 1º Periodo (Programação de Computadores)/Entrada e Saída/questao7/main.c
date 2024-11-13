#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero,n,nn;
	
	printf("Digite um numero:");
	scanf("%d",&numero);
	
	
	n=numero-1;
	nn=n-1;
	
	
	printf("%d %d ",nn,n,numero);
	
	
	
	n=numero+1;
	nn=n+1;
	
	
	printf("%d %d %d",numero,n,nn);
	

	


	
	
	
	return 0;
}
