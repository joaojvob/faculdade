#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	float milimetros,polegadas;

	
	
	printf("Imforme a quantidade da chuva em polegada:");
	scanf("%f",&polegadas);

	milimetros=polegadas*25.4;
	
	printf("A quantidade em milimetros é de:%.1f",milimetros);
	
	
	
	return 0;
}
