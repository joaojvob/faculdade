#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


	int main(){
	setlocale(LC_ALL,"portuguese");	
	
	int i, conta = 0;
	
	char palavra[50], letra;

	printf("\n Digite uma string: ");
	gets(palavra);

	printf("\n Informe um caractere da string: ");
	scanf("%c", &letra);

	for(i=0; palavra[i]!='\0'; i++) {
		if(palavra[i]==letra)
			conta++;
	}

	if(conta==0) {
		printf("\n Caractere não encontrado");
	} else {
		printf ("\n Contagem de caracteres = %d\n", conta);
	}
}
