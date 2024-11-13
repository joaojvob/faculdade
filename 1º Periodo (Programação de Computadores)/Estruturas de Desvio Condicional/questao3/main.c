#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	float temperatura_atual,temperatura_desejada,aumentar,diminuir;
	
	
	
	
	
	printf("Digite a temperatura desejada:");
	scanf("%f",&temperatura_desejada);
	
	printf("Digite a temperatura atual:");
	scanf("%f",&temperatura_atual);
	
	aumentar=temperatura_desejada-temperatura_atual;
	diminuir=temperatura_atual-temperatura_desejada;
	
	if(temperatura_desejada > temperatura_atual){
		printf("Aumente %.1f graus",aumentar);
	
	}
	else{
		printf("Diminua %.1f graus",diminuir);
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
