#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	

	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int c;
		printf("\t===Numeros de 1 a 100===\n");
	for(c=1; c<=100; c=c+1){
		
	printf("=%d\n",c);
		}
		
		
	
	return 0;
}
