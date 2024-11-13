#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	
	int num,i;
	int a=1,b=1,c=1;
	
	printf("Digite um numero:");
	scanf("%d",&num);
	printf("\n\tSequência de Fibonacc\n");
	for(i=1; i<num; i++){
		
		if(i%2==1){
			printf("%d ",c);
			
			c=a+b;
            a=c;
		
		}else if(i==2)
            printf("%d ",c);
            
            
        	else if(i%2==0){
            
			printf("%d ",c);
            c=a+b;
            b=c;
        	}
    		
		}printf("%d \n",c);
    
			
			

	
	return 0;
}
