#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num,c,impares=0;
	
/*	
	  
		printf("Digite um numero:");
		scanf("%d",&num);
		
			if(num%2!=0)
				impares++;

		printf("N�meros impares:%d\n",impares);
		
	
*/	


	printf("informe um n�mero:");
	scanf("%d",&num);

	printf("Proximos n�meros impares\n");

	while(c<10){
		if(num%2==1){
		
			printf(" %d\n",num);
			c++;
		}
		num++;	
	}
	
	return 0;
}



