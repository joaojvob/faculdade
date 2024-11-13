#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");
	
	int mes;
 
	printf("Digite o numero do mês:");
	scanf ("%d",&mes);
	
      if(mes==1){
             printf("\nJaneiro");
             }
      if (mes==2){
             printf ("\nFevereiro");
             }
      if(mes==3){
             printf("\nMarço");
             }
      if (mes==4){
             printf ("\nAbril");
             }
      if(mes==5){
             printf("\nMaio");
             }
      if (mes==6){
             printf ("\nJunho");
             }
      if(mes==7){
             printf("\nJulho");
             }
      if (mes==8){
             printf ("\nAgosto");
             }
      if(mes==9){
             printf("\nSetembro");
             }
      if (mes==10){
             printf ("\nOoutubro");
             }
      if(mes==11){
             printf("\nNovembro");
             }
      if (mes==12){
             printf ("\nDezembro");          
        }
	
	
	
	
	
	
	
	
	return 0;
}
