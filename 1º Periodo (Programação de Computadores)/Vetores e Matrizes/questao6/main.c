#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int matriz[4][4];
int l,c;
	
	int main(){
	setlocale(LC_ALL,"portuguese");
	
		printf("\tPreencha a matriz \n");
	
	
	for(l=0; l<4; l++){
		
		for(c=0; c<4; c++){
			
			printf("\n  Posição da matriz [%d][%d] = ", l, c);
      		scanf("%d", &matriz[ l ][ c ]);
		//	matriz[l][c]=1+ rand ()%100;
		}
	}
		printf("\n\n");
		
		printf("\t Matriz preenchida pelo usuario\n");
	
	for(l=0; l<4; l++){
		
		for(c=0; c<4; c++){
			
			if(matriz[ l ][ c ]<10){
				printf("[  %d ]",matriz[ l ][ c ]);
			}
			else{		
				printf ("[ %d ]",matriz[ l ][ c ]);
      		}
		}
		printf("\n");
	}	
	
		printf("\n\n");
	
		printf("\t Matriz preenchida de forma randomica");

	for(l=0; l<4; l++){
		for(c=0; c<4; c++){
			
		//	printf("\n  Posição da matriz [%d][%d] = ", l, c);
      	//	scanf("%d", &matriz[ l ][ c ]);
			matriz[l][c]=1+ rand ()%100;
		}
	}
	
	printf("\n\n");
	
	for(l=0; l<4; l++){
		
		for(c=0; c<4; c++){
			
			if(matriz[ l ][ c ]<10){
				printf("[  %d ]",matriz[ l ][ c ]);
			}
			else{		
				printf ("[ %d ]",matriz[ l ][ c ]);
      	}
	}
			printf("\n");
}



	return 0;
}
