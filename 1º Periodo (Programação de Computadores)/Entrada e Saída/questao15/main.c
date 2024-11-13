#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int compra,entregue,troco;
	int notas100=0,notas50=0,notas20=0,notas10=0,notas5=0,notas2=0,notas1=0;
	
	
	printf("Digite o valor da compra: R$");
	scanf("%d",&compra);
	
	
	printf("Digite o valor entregue pelo cliente: R$");
	scanf("%d",&entregue);

	troco=entregue-compra;
	
	printf("troco=%d R$",troco);
	
	if(troco>=100){
		notas100=notas100+1;
		troco=troco-100;
	}
	if(troco>=50){
		notas50=notas50+1;
		troco=troco-50;
	}
	if(troco>=20){
		notas20=notas20+1;
		troco=troco-20;
	}
	if(troco>=10){
		notas10=notas10+1;
		troco=troco-10;
	}
	if(troco>=5){
		notas5=notas5+1;
		troco=troco-5;
	}
	if(troco>=2){
		notas2=notas2+1;
		troco=troco-2;
	}
	if(troco>=1){
		notas1=notas1+1;
		troco=troco-2;
	}
	
	
	printf("\nNotas de 100 =%d",notas100);
	printf("\nNotas de 50 =%d",notas50);
	printf("\nNotas de 20 =%d",notas20);
	printf("\nNotas de 5 =%d",notas5);
	printf("\nNotas de 2 =%d",notas2);
	printf("\nNotas de 1 =%d",notas1);


	
	return 0;
}
