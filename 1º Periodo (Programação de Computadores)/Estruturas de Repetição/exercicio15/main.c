#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("Digite um n�mero:");
	scanf("%d",&num);	
	
	if(num%2==0){
		printf("%d n�o � um n�mero primo.",num);
	}else{
		printf("%d � um n�mero primo.",num);
	}

	
	return 0;
}
