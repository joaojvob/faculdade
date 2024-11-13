package Atividade_1;

import java.util.Scanner;



public class Principal {

	public static void main(String[] args) {
		
		int opcao = 0;
		
		int op = 0;

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		
	
		
		do {
			
			System.out.println("");
			System.out.println("");
			System.out.println(" 0 - Sair ");
			System.out.println(" 1 - Professor");
			System.out.println(" 2 - Aluno");
			opcao = entrada.nextInt();
			
			switch(opcao)
			{
			case 0:
				System.out.println("adios....");
				System.exit(0);
				break;
				
			case 1:
				
				Professor prof = new Professor(10, "História", " shaolin matador de porco ");
				prof.verInformacoes();
				
				prof.setSalarioBase(2000);
				prof.calcularGanhos();
				prof.mudarRotina( new Trabalho(8) );
				
				
				
				System.out.println("\n *O que deseja fazer ?? ");
				System.out.println("\n *Começar o dia      > 1 ");
				System.out.println("\n *Descansar          > 2 ");
				System.out.println("\n *ir embora          > 3 ");
				op = entrada.nextInt();
				
				
				if(op == 1) {
					prof.iniciar();
				}
				if(op == 2) {
					prof.pausar();	
				}
				if(op == 3) {
					prof.parar();
				}

				
	
				
			break;		
				
			case 2: 
				

				Aluno estudante = new Aluno("1234567888", 40,"Flavin do pneu");
				
				estudante.mudarRotina( new  Lazer(" ",2) );
			
				estudante.verInformacoes();
				
				System.out.println("\n *O que deseja fazer ?? ");
				System.out.println("\n *Começar o dia      > 1 ");
				System.out.println("\n *Descansar          > 2 ");
				System.out.println("\n *ir embora          > 3 ");
				op = entrada.nextInt();
				
				
				if(op == 1) {
					estudante.iniciar();
				}
				if(op == 2) {
					estudante.pausar();	
				}
				if(op == 3) {
					estudante.parar();
				}
				
			break;
				
			default:
				System.out.println(" Opção Invalida");
				break;
			}

		}while(opcao != 0);
	}

}
