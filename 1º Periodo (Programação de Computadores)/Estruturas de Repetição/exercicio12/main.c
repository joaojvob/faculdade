#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

	int main() {
	setlocale(LC_ALL,"portuguese");
	
	int num;
	int maiores=0,menores=0;
	int maior,menor;
	int pares=0,impares=0;
	
	
	
	do{
		printf("Digite um n�mero:");
		scanf("%d",&num);
		
		
		
		if(num>0)
			maiores++;
			
		else if(num<0)
			menores++;
		
		if(num%2==0)
			pares++;
		
		else if (num%2!=0)
			impares++;
		
	    if(num>maior)
			maior=num;
			
		if(num<menor)
			menor=num;
					
		
	}while(num!=0);
	

	printf("N�meros maiores que 0 = %d\n",maiores);
	
	printf("N�meros menores que 0 = %d\n",menores);
	
	printf("N�meros pares = %d\n",pares);
		
	printf("N�meros impares = %d\n",impares);
	
	printf("Maior n�mero = %d\n",maior);
	
	printf("Menor n�mero = %d\n",menor);

	

}
