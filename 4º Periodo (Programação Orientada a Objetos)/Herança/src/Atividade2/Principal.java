package Atividade2;

import java.util.Scanner;

public class Principal {


	public static void main(String[] args) throws InterruptedException  {

		int opcao = 0;
		

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		
	   
	  
		do {
			
			System.out.println("");
			System.out.println("");
			System.out.println(" 0 - Sair ");
			System.out.println(" 1 - Mostrar moto");
			System.out.println(" 2 - Mostrar carro ");
			opcao = entrada.nextInt();
			
			switch(opcao)
			{
			case 0:
				System.out.println("adios....");
				System.exit(0);
				break;
				
			case 1:
				
				Motos duasRodas = new Motos("Rosa",125,10000);
				duasRodas.verInformacoesMotos();
				System.out.println("\n Stats ");
				duasRodas.movendo();
				
							
			break;		
				
			case 2: 
				
				Carros quatroRodas = new Carros("Verde",50,60000);
				quatroRodas.verInformacoesCarros();
				System.out.println("\n Stats ");
				quatroRodas.movendo();
			break;
				
			default:
				System.out.println(" Opção Invalida");
				break;
			}

		}while(opcao != 0);

		
	}


	

}


