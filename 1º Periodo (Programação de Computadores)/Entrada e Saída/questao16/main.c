#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	
	float salario;
	
	printf("Digite o salario mensal:");
	scanf("%f",&salario);
		
	
	if(salario<=1903.98){
    printf("0.0%%\n",salario);
}
	if(salario>=1903.98 && salario<=2826.65){
    printf("7.5%%\n",salario);
}
	if(salario>=2826.65 && salario<=3751.06){
    printf("15.0%%\n",salario);
}
	if(salario>=3751.06 && salario<=4664.68){
    printf("22.5%%\n",salario);
}
	if(salario>4664.68){
    printf("27.5%%\n",salario);
}
	
	
	

	return 0;
}
