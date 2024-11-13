#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
	int main(){
	
	int num;
	int c=0;

	

	printf("Digite o numero da tabuada desejada:");
	scanf("%d",&num);
	
	for(c=0; c<=9; c++){
			printf("%d x %d = %d\n",num,c,num*c);		
		}
	

	 
	
	system("pause");
	return 0;
}
*/


  	int main(){
  		
  		int i,tab;
  		int result,num;
  		
  		for(tab=0; tab<=9; tab++){
  			
			  printf("\nTabuada de %d\n",tab);
  			
  			for(i=0; i<=9; i++){
  				
  				num=i;
  				result=num*tab;
  				
  				printf(" %d x %d = %d \n",num,tab,result);
  				
			  }  	  
		  }
  		
	  }
