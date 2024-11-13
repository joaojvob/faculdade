#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>
	
	


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int fat=1, num;
	int i;
	
		printf("Insira um valor para calcular seu fatorial: ");
		scanf("%d", &num);
 
	for(i=num; i>0; i--){
	
		fat = fat * i;
 
		printf("%d*", i);
		
	}
		printf("\nFatorial de %d calculado: %d",num,fat);
	
		
		return 0;
	}







/*	
	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n,c=1,fat=1,result;
	
	printf("Insira um valor :");
	scanf("%d",&n);
	
	for(c=1; c<=n; c++){
		
		fat=c*fat;
		
		
		
		
      printf("%d ",fat);
  	}

  

	
	
	

	return 0;
}
*/
