#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

	int main(){
	setlocale(LC_ALL,"portuguese");
	
	float num,raiz;
	float a,i;
	
	
	
	printf("Digite um numero:");
	scanf("%f",&num);
		
	a=0;
	
		for(i=0; i<num; i++){
			if(i*i==num){
				printf("A raiz de %.0f é %.0f",num,i);
				a=1;
			}
		}
		if(a==0){
			printf("Não existe raiz de %.0f",num);
		}

	return 0;
}
