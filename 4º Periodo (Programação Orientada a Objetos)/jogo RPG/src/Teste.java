import java.util.Scanner;
import java.util.Random;


public class Teste extends Personagem{

	static int ataqueUsuario() {
		@SuppressWarnings("resource")
		Scanner leitor = new Scanner(System.in);
		System.out.println(" Escolha seu ataque ");
		System.out.println(" [ 1 ] - Ataque basico ");
		System.out.println(" [ 2 ] - Especial ");
		return leitor.nextInt();
	}
	
	static int ataqueComputador() {
		Random gerador = new Random();
	return gerador.nextInt(3) + 1;
	}
	
	static void imprimeHP(int hpUsuario, int hpComputador, int contagemEspeciais) {
		  System.out.println("---------------------------");
		  System.out.println(" -> HP Usuario        : " + hpUsuario);
		  System.out.println(" -> HP Computador     : " + hpComputador);
		  System.out.println(" -> Contagem Especiais: " + contagemEspeciais);
		  System.out.println("---------------------------");
  }

	static int batalha() {
		int hpUsuario = getHP_usuario();
		int hpComputador;
		int contagemEspecial = 5;
		int escolhaAtaque;
		int i = 1;

		 while (hpUsuario > 0) {
			 
			 hpComputador = getHP_CPU() + i;

		     System.out.println("_-_-_-_-_-_-_-_-_-_-_-");
		     System.out.println(" Start /enemy/ -> " + i);
		     System.out.println("_-_-_-_-_-_-_-_-_-_-_-\n");
		     
		     while (hpUsuario > 0 && hpComputador > 0) {
		    	 imprimeHP(hpUsuario, hpComputador, contagemEspecial);
		    	 escolhaAtaque = ataqueUsuario();
		    
		    	 switch (escolhaAtaque) {
		    	 	case 1:
		    			System.out.println(" Usuario aplicou um Ataque basico . ");
		    			hpComputador -= 7;
		    			break;
		    	 	case 2:
		    			System.out.println(" Usuario aplicou um ataque especial. ");
		    			hpComputador -= 20;
		    			contagemEspecial--;
		    			break;
		    	 	default:
		    	 		System.out.println(" Opcao invalida ");
		    		break;
		    	 }
		    
		    	 if (hpComputador > 0) {
		    		 escolhaAtaque = ataqueComputador();
		    		 switch (escolhaAtaque) {
		    		 case 1:
		    			 System.out.println(" CPU Ataque basico. ");
		    			 hpUsuario -= 2 + (int)(i / 10);
		    			 break;
		    		 case 2:
		    			 System.out.println(" CPU Ataque avan�ado ");
		    			 hpUsuario -= 3 + (int)(i / 10);
		    			 contagemEspecial--;  
		    			 break;
		    		 case 3:
		    			 System.out.println(" CPU aplicou um ataque especial.");
		    			 hpUsuario -= 4 + (int)(i / 20);
		    			 break;
		    		 }
		    	 } else {
		    		 System.out.println(" Inimigo derrotado ");
		    	 } 
		     }
		     if (hpUsuario > 0) {
		    	 	hpUsuario += 5;
		    	 	if (hpUsuario > 150) {
		    	 		hpUsuario = 150;
		    	 	}
		    	 	if (i % 10 == 0) {
		    	 		contagemEspecial++;
		    	 		if (contagemEspecial > 5) {
		    	 			contagemEspecial = 5;
		    	 		}
		    	 	}
		     	}
		     	i++;
		 	}
	return i; 
} 

@SuppressWarnings("resource")
	public static void main(String[] args) {
		Scanner leitor = new  Scanner(System.in);
		int continua = 1;
		int recorde = 0;
		while (continua == 1) {

			int pontos = batalha();
			System.out.println(" Usuario chegou a " + pontos + " pontos.");
			if (pontos > recorde) {
				recorde = pontos;
			}
			System.out.println(" RECORDE ATUAL = " + recorde);
			System.out.println(" Fim de jogo. Deseja continuar? (1) Sim (2) Nao");
			continua = leitor.nextInt();
			}
		}

}