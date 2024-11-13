#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
		float nota,nota1,nota2,nota3,nota4,nota5;
	
		printf("Digite a nota da primeira prova:");
		scanf("%f",&nota1);
	
		printf("Digite a nota da segunda prova:");
		scanf("%f",&nota2);
		
		printf("Digite a nota da terceira prova:");
		scanf("%f",&nota3);
		
		printf("Digite a nota da quarta prova:");
		scanf("%f",&nota4);
		
		printf("Digite a nota da quinta prova:");
		scanf("%f",&nota5);
		
		nota=nota1+nota2+nota3+nota4+nota5;
		
		printf("Soma total das notas:%.1f pontos\nSituação da aluna\n",nota);
		
		
		if(nota<50){
			printf("Reprovada");
		}
		if(nota>=50 && nota<=69.9){
			printf("Recuperação");
		}
		if(nota>=70){
			printf("Aprovada");
		}
		
	return 0;
}
