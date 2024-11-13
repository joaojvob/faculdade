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
		printf("Digite um número:");
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
	

	printf("Números maiores que 0 = %d\n",maiores);
	
	printf("Números menores que 0 = %d\n",menores);
	
	printf("Números pares = %d\n",pares);
		
	printf("Números impares = %d\n",impares);
	
	printf("Maior número = %d\n",maior);
	
	printf("Menor número = %d\n",menor);

	

}
