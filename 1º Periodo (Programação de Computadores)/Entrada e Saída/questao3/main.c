#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//questao3 

	int main(){
	setlocale(LC_ALL,"portuguese");
	
	/*	a.10% Açúcar
	b. 30% Farinha de trigo
	c. 10% Margarina
	d. 20% Ovos
	e. 15% Leite
	f. 10% Leite Condensado
	g. 5% Fermento em pó*/
	
	
		float peso,a,ft,m,o,l,lc,f;
		
		
		printf("Informe o peso total do bolo em KG:");
		scanf("%f",&peso);
		
		
		a=((peso*10)/100)*1000;
		ft=((peso*30)/100)*1000;
		m=((peso*10)/100)*1000;
		o=((peso*20)/100)*1000;
		l=((peso*15)/100)*1000;
		lc=((peso*10)/100)*1000;
		f=((peso*5)/100)*1000;
		
		
		printf("Açucar: %.2fg\n",a);
		printf("Farinha de trigo; %.2fg\n",ft);
		printf("Margarina: %.2fg\n",m);
		printf("Ovos: %.2fg\n",o);
		printf("leite: %.2fg\n",l);
		printf("leite condesado: %.2fg\n",lc);
		printf("Fermmento: %.2fg\n",f);






	return 0;	
}
