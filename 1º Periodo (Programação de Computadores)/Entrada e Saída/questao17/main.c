#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguse");
	
	float compra,aprazo,avista,desconto,total;
	int formadepagamento;
	
	printf("Digite o valor da compra:R$");
	scanf("%f",&compra);
	
	printf("Qual e a forma de pagamento?\n\t1-A prazo\n\t2-A vista\n ");
	scanf("%d",&formadepagamento);
	
	if(formadepagamento==1){
		printf("Pagamento a prazo\n");
		
		if(compra<=100){
		printf("15%% de desconto\n");
		desconto=(compra*10)/100;
    	total=compra-desconto;
		printf("Valor a pagar=%f\n",total);
		}
		
////////////////////////////////////////////////////////////////////////////////////////////////////
	if(compra>100 && compra<500){
    
	desconto=(compra*15)/100;
    total=compra-desconto;
    
		printf("O valor do desconto sera de R$%.2f a prazo\n",desconto);
    	printf("O valor da compra com o desconto a prazo e de:R$%2.f \n",total);
	}///////////////////////////////////////////////////////////////////////////////////////////////
	if(compra>499 && compra <1000){
    
	desconto=(compra*20)/100;
    total=compra-desconto;
    
		printf("O valor do desconto sera de R$%.2f a prazo\n",desconto);
    	printf("O valor da compra com o desconto a prazo e de:R$%2.f \n",total);
    }///////////////////////////////////////////////////////////////////////////////////////////////

	if(compra >1000){
    
	desconto=(compra*30)/100;
    total=compra-desconto;
    
		printf("O valor do desconto sera de R$%.2f a prazo\n",desconto);
    	printf("O valor da compra com o desconto a prazo e de:R$%2.f \n",total);
	}///////////////////////////////////////////////////////////////////////////////////////////////
	}
	if(formadepagamento==2){
		printf("Pagamento a vista\n");
	
	if(compra<=100){
	desconto=(compra*15)/100;
    total=compra-desconto;
    	
		printf("O valor do desconto sera de R$%.2f a vista\n",desconto);
    	printf("O valor da compra com o desconto a vista e de:R$%2.f \n",total);
	}///////////////////////////////////////////////////////////////////////////////////////////////

	if(compra>100 && compra<500){
	desconto=(compra*20)/100;
    total=compra-desconto;
    
		printf("O valor do desconto sera de R$%.2f a vista\n",desconto);
    	printf("O valor da compra com o desconto a vista e de:R$%2.f \n",total);
	}///////////////////////////////////////////////////////////////////////////////////////////////
	
	if(compra>500 && compra <1000){   
	desconto=(compra*25)/100;
    total=compra-desconto;
    
		printf("O valor do desconto sera de R$%.2f a vista\n",desconto);
    	printf("O valor da compra com o desconto a vista e de:R$%2.f \n",total);
	}//////////////////////////////////////////////////////////////////////////////////////////////
	
	if(compra >1000){
	desconto=(compra*40)/100;
    total=compra-desconto;
    
		printf("O valor do desconto sera de R$%.2f a prazo\n",desconto);
    	printf("O valor da compra com o desconto a prazo e de:R$%2.f \n",total);
	
	}
}


}

